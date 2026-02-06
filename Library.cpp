#include "Library.h"
#include <algorithm>

void Library::addBook(const Book& book) {
    books.push_back(book);
}

void Library::removeBook(int bookId) {
    books.erase(
        std::remove_if(books.begin(), books.end(),
            [bookId](const Book& b) { return b.getId() == bookId; }),
        books.end()
    );
}

void Library::addUser(const User& user) {
    users.push_back(user);
}

Book* Library::findBookById(int bookId) {
    for (auto& book : books) {
        if (book.getId() == bookId)
            return &book;
    }
    return nullptr;
}

User* Library::findUserById(int userId) {
    for (auto& user : users) {
        if (user.getUserId() == userId)
            return &user;
    }
    return nullptr;
}

bool Library::borrowBook(int userId, int bookId) {
    Book* book = findBookById(bookId);
    User* user = findUserById(userId);

    if (book && user && !book->getBorrowStatus()) {
        book->borrowBook();
        user->borrowBook(bookId);
        return true;
    }
    return false;
}

bool Library::returnBook(int userId, int bookId) {
    Book* book = findBookById(bookId);
    User* user = findUserById(userId);

    if (book && user && user->hasBorrowed(bookId)) {
        book->returnBook();
        user->returnBook(bookId);
        return true;
    }
    return false;
}
