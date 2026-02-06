#include "User.h"
#include <algorithm>

User::User(int userId, const std::string& name)
    : userId(userId), name(name) {}

int User::getUserId() const {
    return userId;
}

std::string User::getName() const {
    return name;
}

void User::borrowBook(int bookId) {
    borrowedBooks.push_back(bookId);
}

void User::returnBook(int bookId) {
    borrowedBooks.erase(
        std::remove(borrowedBooks.begin(), borrowedBooks.end(), bookId),
        borrowedBooks.end()
    );
}

bool User::hasBorrowed(int bookId) const {
    return std::find(borrowedBooks.begin(), borrowedBooks.end(), bookId) != borrowedBooks.end();
}
