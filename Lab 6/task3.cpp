#include <iostream>
using namespace std;

class Matrix {
    static const int rows = 10;
    static const int columns = 10;
    int **matrix;
    int act_rows, act_cols;
public:
    Matrix(int rows, int cols) {
        if (rows > this->rows && cols > this->columns) {
            cout << "Invalid columns or rows.....\nInitializing by default.....\n";
            act_cols = 10, act_rows = 10;
        }
        else {
            act_cols = cols, act_rows = rows;
        }
        init();
    }
    void init() {
        matrix = new int*[act_rows];
        for (int i = 0; i < act_rows; i++) {
            matrix[i] = new int[act_cols];
        }
        for (int i = 0; i < act_rows; i++) 
            for (int j = 0; j < act_cols; j++) 
                matrix[i][j] = 0;
    }
    Matrix() {
        act_cols = 10, act_rows = 10;
        init();
    }
    ~Matrix() {
        for (int i = 0; i < act_rows; i++) {
            delete[] matrix[i];
            matrix[i] = 0;
        }
        delete[] matrix;
        matrix = 0;
    }
    void putel(int row, int col, int val) {
        if (row < act_rows && col < act_cols)
            matrix[row][col] = val;
        else
            cout << "Invalid Index....\nEnter a valid one\n";
    }
    int getel(int row, int col) {
        if (row < act_rows && col < act_cols)
            return matrix[row][col];
        cout << "Invalid Index....\nReturning -1.....\n";
        return -1;
    }

};
int main() {
    Matrix m1(3, 4);
    m1.putel(2, 3, 100);
    cout << m1.getel(3, 4) << endl;
    cout << m1.getel(2, 3) << endl;
    Matrix m2;
    m2.putel(2, 3, 90);
    m2.putel(9, 10, 90);
    cout << m2.getel(3, 4) << endl;
    cout << m2.getel(2, 3) << endl;
}