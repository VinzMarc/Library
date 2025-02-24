#include <iostream>
#include <vector>
#include <string>

using namespace std;

struct Book {
    string title;
    string author;
    string releaseDate;
    string genre;
};

vector<Book> library;

void addBook() {
    Book newBook;
    cout << "Enter title: ";
    cin.ignore();
    getline(cin, newBook.title);
    cout << "Enter author: ";
    getline(cin, newBook.author);
    cin.ignore(); // to clear the newline character from the buffer
    cout << "Enter release date: ";
    getline(cin, newBook.releaseDate);
    cout << "Enter genre: ";
    getline(cin, newBook.genre);
    library.push_back(newBook);
    cout << "Book added successfully!" << endl;
}

void displayBooks() {
    cout << "Book List:" << endl;
    cout << "Title                        Author           Release Date    Genre" << endl;
    for (const auto& book : library) {
        cout << book.title << "          " << book.author << "    " << book.releaseDate << "    " << book.genre << endl;
    }
}

void searchBook() {
    string searchTitle;
    cout << "Enter a book to search: ";
    cin.ignore();
    getline(cin, searchTitle);
    bool found = false;
    for (const auto& book : library) {
        if (book.title == searchTitle) {
            cout << "Book found!" << endl;
            cout << "Title: " << book.title << endl;
            cout << "Author: " << book.author << endl;
            cout << "Release Date: " << book.releaseDate << endl;
            cout << "Genre: " << book.genre << endl;
            found = true;
            break;
        }
    }
    if (!found) {
        cout << "Book not found!" << endl;
    }
}

int main() {
    int choice;
    do {
        cout << "Menu" << endl;
        cout << "1 - Add Book" << endl;
        cout << "2 - Display Book" << endl;
        cout << "3 - Search Book" << endl;
        cout << "4 - Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                addBook();
                break;
            case 2:
                displayBooks();
                break;
            case 3:
                searchBook();
                break;
            case 4:
                cout << "Exiting..." << endl;
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    } while (choice != 4);

    return 0;
}