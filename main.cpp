#include <iostream>
#include "Library.h"

int main() {
    Library library;

    library.addBook(Book(1, "C++ Programming", "Bjarne Stroustrup"));
    library.addBook(Book(2, "Data Structures", "Mark Weiss"));

    library.addUser(User(101, "Alice"));
    library.addUser(User(102, "Bob"));

    if (library.borrowBook(101, 1))
        std::cout << "Book borrowed successfully.\n";
    else
        std::cout << "Borrowing failed.\n";

    if (library.returnBook(101, 1))
        std::cout << "Book returned successfully.\n";
    else
        std::cout << "Return failed.\n";

    return 0;
}
