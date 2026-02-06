#ifndef LIBRARY_H
#define LIBRARY_H

#include <vector>
#include "Book.h"
#include "User.h"

class Library {
private:
    std::vector<Book> books;
    std::vector<User> users;

public:
    void addBook(const Book& book);
    void removeBook(int bookId);
    void addUser(const User& user);

    Book* findBookById(int bookId);
    User* findUserById(int userId);

    bool borrowBook(int userId, int bookId);
    bool returnBook(int userId, int bookId);
};

#endif
