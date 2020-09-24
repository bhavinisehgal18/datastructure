
#include <bits/stdc++.h> 
  
using namespace std; 
  
#define MAX_SIZE 100
  
void sortRow(int mat[MAX_SIZE][MAX_SIZE], int n) 
{ 
    for (int i = 0; i < n; i++) 
  
          sort(mat[i], mat[i] + n); 
} 
  
void tp(int mat[MAX_SIZE][MAX_SIZE], int n) 
{ 
    for (int i = 0; i < n; i++) 
        for (int j = i + 1; j < n; j++)  
  
           
            swap(mat[i][j], mat[j][i]); 
} 
  
void sortCol(int mat[MAX_SIZE][MAX_SIZE], int n) 
{ 
    
    sortRow(mat, n); 
  
    tp(mat, n); 
  
    sortRow(mat, n); 
  
    tp(mat, n); 
} 
  

void printMat(int mat[MAX_SIZE][MAX_SIZE], int n) 
{ 
    for (int i = 0; i < n; i++) { 
        for (int j = 0; j < n; j++) 
            cout << mat[i][j] << " "; 
        cout << endl; 
    } 
} 
  

int main() 
{ 
    int mat[MAX_SIZE][MAX_SIZE] = { { 2, 1, 3 }, 
                                    { 1, 4, 5 }, 
                                    { 5, 2, 9 } }; 
    int n = 3; 
  
    cout << "Original Matrix:\n"; 
    printMat(mat, n); 
  
    sortCol(mat, n); 
  
    cout << "\nMatrix After Sorting:\n"; 
    printMat(mat, n); 
  
    return 0; 
} 