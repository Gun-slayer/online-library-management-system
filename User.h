#ifndef USER_H
#define USER_H

#include <string>
#include <vector>

class User {
private:
    int userId;
    std::string name;
    std::vector<int> borrowedBooks;

public:
    User(int userId, const std::string& name);

    int getUserId() const;
    std::string getName() const;

    void borrowBook(int bookId);
    void returnBook(int bookId);
    bool hasBorrowed(int bookId) const;
};

#endif
