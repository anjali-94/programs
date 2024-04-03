#include <iostream>

using namespace std;

class Matrix {
private:
    int rows;
    int cols;
    int **data;

public:
    // Constructor
    Matrix(int r, int c) : rows(r), cols(c) {
        // Allocate memory for the matrix
        data = new int*[rows];
        for (int i = 0; i < rows; ++i) {
            data[i] = new int[cols];
            // Initialize matrix elements to 0
            for (int j = 0; j < cols; ++j) {
                data[i][j] = 0;
            }
        }
    }

    // Destructor
    ~Matrix() {
        // Deallocate memory for the matrix
        for (int i = 0; i < rows; ++i) {
            delete[] data[i];
        }
        delete[] data;
    }

    // Getter and Setter methods
    int getRows() const { return rows; }
    int getCols() const { return cols; }

    int getValue(int i, int j) const {
        return data[i][j];
    }

    void setValue(int i, int j, int value) {
        data[i][j] = value;
    }

    // Function to display the matrix
    void display() const {
        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < cols; ++j) {
                cout << data[i][j] << " ";
            }
            cout << endl;
        }
    }

    // Function to multiply two matrices
    static Matrix multiplyMatrices(const Matrix& mat1, const Matrix& mat2) {
        int rows1 = mat1.getRows();
        int cols1 = mat1.getCols();
        int cols2 = mat2.getCols();

        Matrix result(rows1, cols2);

        for (int i = 0; i < rows1; ++i) {
            for (int j = 0; j < cols2; ++j) {
                for (int k = 0; k < cols1; ++k) {
                    result.setValue(i, j, result.getValue(i, j) + mat1.getValue(i, k) * mat2.getValue(k, j));
                }
            }
        }

        return result;
    }
};

int main() {
    // Create two matrices
    Matrix mat1(2, 3);
    Matrix mat2(3, 2);

    // Set values for mat1
    mat1.setValue(0, 0, 1);
    mat1.setValue(0, 1, 2);
    mat1.setValue(0, 2, 3);
    mat1.setValue(1, 0, 4);
    mat1.setValue(1, 1, 5);
    mat1.setValue(1, 2, 6);

    // Set values for mat2
    mat2.setValue(0, 0, 7);
    mat2.setValue(0, 1, 8);
    mat2.setValue(1, 0, 9);
    mat2.setValue(1, 1, 10);
    mat2.setValue(2, 0, 11);
    mat2.setValue(2, 1, 12);

    // Multiply matrices and display the result
    Matrix result = Matrix::multiplyMatrices(mat1, mat2);
    cout << "Result of matrix multiplication:" << endl;
    result.display();

    return 0;
}
