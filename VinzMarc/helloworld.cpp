#include <iostream>
#include <string>

using namespace std;

class Person {
private:
    string name;
    int age;
    string gender;
    double height; // Height in meters

public:
    // Constructor
    Person(string name, int age, string gender, double height) {
        this->name = name;
        this->age = age;
        this->gender = gender;
        this->height = height;
        cout << "Person '" << name << "' created." << endl;
    }

    // Destructor
    ~Person() {
        cout << "Person '" << name << "' destroyed." << endl;
    }

    // Display method
    void display() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Gender: " << gender << endl;
        cout << "Height: " << height << " meters" << endl;
    }
};

class Book {
private:
    string title;
    string author;
    string releaseDate;
    string genre;
    double rating;

public:
    // Constructor
    Book(string title, string author, string releaseDate, string genre, double rating) {
        this->title = title;
        this->author = author;
        this->releaseDate = releaseDate;
        this->genre = genre;
        this->rating = rating;
        cout << "Book '" << title << "' created." << endl;
    }

    // Destructor
    ~Book() {
        cout << "Book '" << title << "' destroyed." << endl;
    }

    // Display method
    void display() {
        cout << "Title: " << title << endl;
        cout << "Author: " << author << endl;
        cout << "Release Date: " << releaseDate << endl;
        cout << "Genre: " << genre << endl;
        cout << "Rating: " << rating << endl;
    }
};

int main() {
    // Create a Person object
    Person superman("Clark Kent", 54, "male", 1.85);

    // Display the person's information
    superman.display();

    // Create a Book object
    Book myBook("The Great Gatsby", "F. Scott Fitzgerald", "April 10, 1925", "Novel", 4.5);

    // Display the book's information
    myBook.display();

    // The Person and Book objects will be destroyed when they go out of scope (end of main function)
    return 0;
}