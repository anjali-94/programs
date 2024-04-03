#include <stdio.h>
#include <string.h>

// Define the structure for book information
struct Book {
    int accessionNumber;
    char author[50];
    char title[100];
    int isIssued; // 0 for not issued, 1 for issued
};

// Function to display book information
void displayBookInfo(struct Book book) {
    printf("Accession Number: %d\n", book.accessionNumber);
    printf("Author: %s\n", book.author);
    printf("Title: %s\n", book.title);
    printf("Status: %s\n", (book.isIssued == 1) ? "Issued" : "Not Issued");
    printf("\n");
}

// Function to display all books in the library
void displayAllBooks(struct Book library[], int totalBooks) {
    printf("All Books in the Library:\n");
    for (int i = 0; i < totalBooks; i++) {
        displayBookInfo(library[i]);
    }
}

// Function to display books of a particular author
void displayBooksByAuthor(struct Book library[], int totalBooks, char author[]) {
    printf("Books by Author '%s':\n", author);
    for (int i = 0; i < totalBooks; i++) {
        if (strcmp(library[i].author, author) == 0) {
            displayBookInfo(library[i]);
        }
    }
}

// Function to display the number of books of a particular title
void displayNumberOfBooksByTitle(struct Book library[], int totalBooks, char title[]) {
    int count = 0;
    for (int i = 0; i < totalBooks; i++) {
        if (strcmp(library[i].title, title) == 0) {
            count++;
        }
    }
    printf("Number of books with title '%s': %d\n", title, count);
}

// Function to display the total number of books in the library
void displayTotalNumberOfBooks(int totalBooks) {
    printf("Total number of books in the library: %d\n", totalBooks);
}

// Function to issue a book
void issueBook(struct Book library[], int totalBooks, int accessionNumber) {
    for (int i = 0; i < totalBooks; i++) {
        if (library[i].accessionNumber == accessionNumber && library[i].isIssued == 0) {
            library[i].isIssued = 1;
            printf("Book with Accession Number %d has been issued.\n", accessionNumber);
            return;
        }
    }
    printf("Book with Accession Number %d is either not available or already issued.\n", accessionNumber);
}

// Function to add a new book to the library
void addNewBook(struct Book library[], int *totalBooks) {
    printf("Enter Book Information:\n");

    // Increment the total number of books
    (*totalBooks)++;

    // Get information for the new book
    struct Book newBook;
    newBook.accessionNumber = *totalBooks; // Assigning a simple accession number here
    printf("Author: ");
    scanf("%s", newBook.author);
    printf("Title: ");
    scanf("%s", newBook.title);
    newBook.isIssued = 0; // New books are initially not issued

    // Add the new book to the library
    library[*totalBooks - 1] = newBook;

    printf("New book added to the library.\n");
}

int main() {
    struct Book library[100]; // Assuming a maximum of 100 books in the library
    int totalBooks = 0;
    int choice, accessionNumber;
    char author[50], title[100];

    do {
        // Display menu
        printf("\nLibrary Menu:\n");
        printf("1 - Display book information\n");
        printf("2 - Add a new book\n");
        printf("3 - Display all books by a particular author\n");
        printf("4 - Display the number of books of a particular title\n");
        printf("5 - Display the total number of books in the library\n");
        printf("6 - Issue a book\n");
        printf("0 - Exit\n");

        // Get user choice
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                displayAllBooks(library, totalBooks);
                break;
            case 2:
                addNewBook(library, &totalBooks);
                break;
            case 3:
                printf("Enter author name: ");
                scanf("%s", author);
                displayBooksByAuthor(library, totalBooks, author);
                break;
            case 4:
                printf("Enter book title: ");
                scanf("%s", title);
                displayNumberOfBooksByTitle(library, totalBooks, title);
                break;
            case 5:
                displayTotalNumberOfBooks(totalBooks);
                break;
            case 6:
                printf("Enter accession number to issue a book: ");
                scanf("%d", &accessionNumber);
                issueBook(library, totalBooks, accessionNumber);
                break;
            case 0:
                printf("Exiting the program. Goodbye!\n");
                break;
            default:
                printf("Invalid choice. Please enter a valid option.\n");
        }
    } while (choice != 0);

    return 0;
}

