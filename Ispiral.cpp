#include <bits/stdc++.h> 
using namespace std; 
#define R 4
#define C 5
  
void spiralscan(int m, int n, int a[R][C]) 
{ 
    int i, k = 0, l = 0; 
  
    
    while (k < m && l < n) { 

        for (i = 1; i < n; i++) { 
            cout << a[k][i] << " "; 
        } 
        k++; 
  
        
        for (i = k; i < m; i++) { 
            cout << a[i][n - 1] << " "; 
        } 
        n--; 
  
        
        if (k < m) { 
            for (i = n - 1; i >= l; i--) { 
                cout << a[m - 1][i] << " "; 
            } 
            m--; 
        } 
  
        
        if (l < n) { 
            for (i = m - 1; i >= k; i--) { 
                cout << a[i][l] << " "; 
            } 
            l++; 
        } 
    } 
} 

int main() 
{ 
    int a[R][C] = { { 1, 2, 3, 4, 5}, 
                    { 7, 8, 9, 10, 11}, 
                    { 13, 14, 15, 16, 17 },
                    { 18, 19, 20, 21, 22} }; 
  
    spiralscan(R, C, a); 
    return 0; 
}