/*
Name - Prashant Kumar 

Language - C++

Location - India

Github -https://github.com/prashantkr29



#include <iostream>

#define N 4

using namespace std;

//  function to rotate a matrix by 90 degrees

void rotateMatrix(int mat[][N])

{

    // Consider all squares one by one

    for (int x = 0; x < N / 2; x++) {

        // Consider elements in group of 4 in current square
        
        for (int y = x; y < N - x - 1; y++) {
        
            int temp = mat[x][y];
        
            mat[x][y] = mat[y][N - 1 - x];
        
            mat[y][N - 1 - x] = mat[N - 1 - x][N - 1 - y];
        
            mat[N - 1 - x][N - 1 - y] = mat[N - 1 - y][x];
        
            mat[N - 1 - y][x] = temp;
        
        }
    }

}

 
// Function to print the matrix

void displayMatrix(int mat[N][N])

{

    for (int i = 0; i < N; i++) {

        for (int j = 0; j < N; j++) {

            cout << mat[i][j] << " ";

        }

        cout << endl;

    }

    cout << endl;

}
 
/* Main function*/

int main()

{

    int mat[N][N];
    
    cout<<"Enter the elements of the matrix"<<endl;
    
    for (int i = 0; i < N; i++) {
    
        for (int j = 0; j < N; j++) {
    
            cin >> mat[i][j] ;
    
        }
      
    }
    
    rotateMatrix(mat);
    
    displayMatrix(mat);
 
    return 0;
}
