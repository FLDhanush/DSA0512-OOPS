#include <iostream>
using namespace std;

class Matrix {
private:
    int rows;
    int cols;
    int** data;

public:
    Matrix(int r, int c) {
        rows = r;
        cols = c;
        data = new int*[rows];
        for (int i = 0; i < rows; ++i) {
            data[i] = new int[cols];
        }
    }

  
    Matrix() {
        for (int i = 0; i < rows; ++i) {
            delete[] data[i];
        }
        delete[] data;
    }

    
    void inputMatrix() {
        cout << "Enter elements of the matrix (" << rows << "x" << cols << "):" << endl;
        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < cols; ++j) {
                cin >> data[i][j];
            }
        }
    }

    
    Matrix add(const Matrix& other) const {
        Matrix result(rows, cols);
        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < cols; ++j) {
                result.data[i][j] = this->data[i][j] + other.data[i][j];
            }
        }
        return result;
    }

   
    void displayMatrix() const {
        cout << "Matrix (" << rows << "x" << cols << "):" << endl;
        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < cols; ++j) {
                cout << data[i][j] << " ";
            }
            cout << endl;
        }
    }
};

int main() {
    int rows, cols;

    
    cout << "Enter the number of rows: ";
    cin >> rows;
    cout << "Enter the number of columns: ";
    cin >> cols;

    
    Matrix matrix1(rows, cols);
    Matrix matrix2(rows, cols);

    
    matrix1.inputMatrix();
    matrix2.inputMatrix();

 
    Matrix result = matrix1.add(matrix2);

    
    cout << "Resultant Matrix after addition:" << endl;
    result.displayMatrix();

    return 0;
}
