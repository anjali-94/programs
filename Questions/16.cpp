#include <iostream>
#include <iomanip>

using namespace std;

class Matrix {
private:
    int row;
    int col;
    int **matrix; // dynamically allocated 2D array

public:
    // Constructor to allocate memory for the matrix with given dimensions
    Matrix(int r, int c) : row(r), col(c) {
        // Allocate memory for the rows
        matrix = new int*[row];

        // Allocate memory for the columns
        for (int i = 0; i < row; ++i) {
            matrix[i] = new int[col];
        }

        // Initialize matrix elements to 0
        for (int i = 0; i < row; ++i) {
            for (int j = 0; j < col; ++j) {
                matrix[i][j] = 0;
            }
        }
    }

    // Destructor to free dynamically allocated memory
    ~Matrix() {
        // Deallocate memory for the columns
        for (int i = 0; i < row; ++i) {
            delete[] matrix[i];
        }

        // Deallocate memory for the rows
        delete[] matrix;
    }

    // Method to set the value of an individual matrix element
    void setValue(int i, int j, int value) {
        if (i >= 0 && i < row && j >= 0 && j < col) {
            matrix[i][j] = value;
        } else {
            cerr << "Invalid indices for setting value." << endl;
        }
    }

    // Method to get the value of an individual matrix element
    int getValue(int i, int j) const {
        if (i >= 0 && i < row && j >= 0 && j < col) {
            return matrix[i][j];
        } else {
            cerr << "Invalid indices for getting value." << endl;
            return -1; // Assuming -1 as an invalid value
        }
    }

    // Method to display the contents of the matrix
    void display() const {
        for (int i = 0; i < row; ++i) {
            for (int j = 0; j < col; ++j) {
                cout << setw(4) << matrix[i][j];
            }
            cout << endl;
        }
    }
};

int main() {
    // Create a 3x3 matrix
    Matrix myMatrix(3, 3);

    // Set values
    myMatrix.setValue(0, 0, 1);
    myMatrix.setValue(1, 1, 5);
    myMatrix.setValue(2, 2, 9);

    // Display the matrix
    cout << "Matrix Contents:" << endl;
    myMatrix.display();

    // Get and display individual values
    cout << "Value at (1, 1): " << myMatrix.getValue(1, 1) << endl;
    cout << "Value at (2, 2): " << myMatrix.getValue(2, 2) << endl;

    return 0;
}
