//A bookshop maintains the inventory of books that are being sold at the shop. The list
//includes details such as author, title, price, publisher, and stock position. Whenever a
//customer wants a book, the salesperson inputs the title and author and the system searches
//the list and displays whether it is available or not. If it is not, an appropriate message is
//displayed. If it is, then the system displays the book details and requests for the number of
//copies required. If the requested copies are available, the total cost of the requested copies is
//displayed; otherwise “Required copies not in stock” is displayed. Design a system using a
//class called books with suitable member functions and constructors. Use new operator in
//constructors to allocate memory space required.

#include <iostream>
#include <cstring>

using namespace std;

class Book {
private:
    char* title;
    char* author;
    float price;
    char* publisher;
    int stock;

public:
    // Constructor to initialize book details
    Book(const char* t, const char* a, float p, const char* pub, int s) {
        title = new char[strlen(t) + 1];
        author = new char[strlen(a) + 1];
        publisher = new char[strlen(pub) + 1];

        strcpy(title, t);
        strcpy(author, a);
        price = p;
        strcpy(publisher, pub);
        stock = s;
    }

    // Destructor to free allocated memory
    ~Book() {
        delete[] title;
        delete[] author;
        delete[] publisher;
    }

    // Function to check book availability and display details
    void checkAvailability(const char* searchTitle, const char* searchAuthor, int numCopies) {
        if (strcmp(title, searchTitle) == 0 && strcmp(author, searchAuthor) == 0) {
            if (numCopies <= stock) {
                displayDetails();
                cout << "Enter the number of copies required: " << numCopies << endl;
                cout << "Total cost: $" << numCopies * price << endl;
            } else {
                cout << "Required copies not in stock" << endl;
            }
        } else {
            cout << "Book not found in the inventory" << endl;
        }
    }

    // Function to display book details
    void displayDetails() const {
        cout << "Title: " << title << endl;
        cout << "Author: " << author << endl;
        cout << "Price: $" << price << endl;
        cout << "Publisher: " << publisher << endl;
        cout << "Stock: " << stock << " copies" << endl;
    }
};

int main() {
    // Create an instance of the Book class
    Book book1("The Catcher in the Rye", "J.D. Salinger", 12.99, "Little, Brown and Company", 20);

    // Example: Check availability and display details for a book
    book1.checkAvailability("The Catcher in the Rye", "J.D. Salinger", 5);

    return 0;
}
