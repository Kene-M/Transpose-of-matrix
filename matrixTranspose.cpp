#include <iostream>
using namespace std;
const int MAXROWS = 4;
const int MAXCOLS = 4;

void display(int [MAXROWS][MAXCOLS]);
int main()
{
    int A[MAXROWS][MAXCOLS];
    int row, col, tmp, cnt=0;

    // initialize the matrix
    for (row = 0; row < MAXROWS; row++){
        for (col = 0; col < MAXCOLS; col++){
            A[row][col] = cnt++;
            cout << A[row][col] << " ";
        }
        cout << endl;
    }
    cout << endl;

    // code to find transpose of A UPPER TRIANGLE
    for (row = 0; row < MAXROWS; row++){
        for (col = row + 1; col < MAXCOLS; col++){
            tmp = A[row][col];
            A[row][col] = A[col][row];
            A[col][row] = tmp;
        }
    }
    cout << "The transpose of the matrix traversing upper"
         << "triangle by rows: " << endl;
     display(A);
/*
// another way code to find transpose of A UPPER TRIANGLE
    for (col = 0; col < MAXCOLS; col++){
        for (row = 0; row < col; row++){
            tmp = A[row][col];
            A[row][col] = A[col][row];
            A[col][row] = tmp;
        }
    }
    cout << "The transpose of the matrix traversing lower"
         << "triangle by cols: " << endl;
     display(A);

     // another way code to find transpose of A LOWER TRIANGLE
    for (col = 0; col < MAXCOLS; col++){
        for (row = col+1; row < MAXROWS; row++){
            tmp = A[row][col];
            A[row][col] = A[col][row];
            A[col][row] = tmp;
        }
    }
    cout << "The transpose of the matrix traversing upper"
         << "triangle by cols: " << endl;
     display(A);



     for (row = 0; row < MAXROWS; row++){
        for (col = 0; col < row ; col++){
            tmp = A[row][col];
            A[row][col] = A[col][row];
            A[col][row] = tmp;
        }
    }
    cout << "The transpose of the matrix traversing lower"
         << "triangle by rows: " << endl;
     display(A); */
}
    // display the results
void display(int A[MAXROWS][MAXCOLS])
{
    for (int row = 0; row < MAXROWS; row++){
        for (int col = 0; col < MAXCOLS; col++){
            cout << A[row][col] << " ";
        }
        cout << endl;
    }
}


