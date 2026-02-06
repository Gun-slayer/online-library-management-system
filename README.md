# Online Library Management System (C++)

## BSD 122 – Object-Oriented Programming 1  
**Assignment 1**

### Description
This project is a simple Online Library Management System implemented in C++ using Object-Oriented Programming (OOP) principles. It demonstrates class design, encapsulation, and interaction between objects in a real-world scenario.

### Features
- Add and remove books
- Register users
- Borrow and return books
- Prevent borrowing of already borrowed books
- Basic validation for invalid operations

### Project Structure
- `Book.h / Book.cpp` – Book class
- `User.h / User.cpp` – User class
- `Library.h / Library.cpp` – Library management logic
- `main.cpp` – Program entry point and test cases

### How to Compile and Run
```bash
g++ main.cpp Book.cpp User.cpp Library.cpp -o library
./library
```

### Test Cases Covered
- Borrowing an available book
- Attempting to borrow an already borrowed book
- Returning a borrowed book
- Attempting to return a book not borrowed

### Author
Lenox Macharia  
BSc Software Engineering  
Zetech University
