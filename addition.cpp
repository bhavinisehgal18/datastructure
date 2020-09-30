#include <iostream>
#include <stdlib.h>
using namespace std;
void add(int b1[100][3], int b2[100][3], int b3[100][3])
{
    int t1, t2, i, j, k;
    if (b1[0][0] != b2[0][0] || b1[0][1] != b2[0][1])
    {
        cout<<"\nAddition cannot be performed, size must be equal.";
        return;
    }
    t1 = b1[0][2];
    t2 = b2[0][2];
    i = j = k = 0;
    b3[0][0] = b1[0][0];
    b3[0][1] = b1[0][1];
    while (i <= t1 && j <= t2)
    {
        if (b1[i][0] < b2[j][0])
        {
            b3[k][0] = b1[i][0];
            b3[k][1] = b1[i][1];
            b3[k][2] = b1[i][2];
            k++;
            i++;
        }
        else if (b2[j][0] < b1[i][0])
        {
            b3[k][0] = b2[j][0];
            b3[k][1] = b2[j][1];
            b3[k][2] = b2[j][2];
            k++;
            j++;
        }
        else if (b1[i][1] < b2[j][1])
        {
            b3[k][0] = b1[i][0];
            b3[k][1] = b1[i][1];
            b3[k][2] = b1[i][2];
            k++;
            i++;
        }
        else if (b2[j][1] < b1[i][1])
        {
            b3[k][0] = b2[j][0];
            b3[k][1] = b2[j][1];
            b3[k][2] = b2[j][2];
            k++;
            j++;
        }
        else
        {
            b3[k][0] = b1[i][0];
            b3[k][1] = b1[i][1];
            b3[k][2] = b1[i][2] + b2[j][2];
            k++;
            i++;
            j++;
        }
    }

    while (i <= t1)
    {
        b3[k][0] = b1[i][0];
        b3[k][1] = b1[i][1];
        b3[k][2] = b1[i][2];
        i++;
        k++;
    }

    while (j <= t2)
    {
        b3[k][0] = b2[j][0];
        b3[k][1] = b2[j][1];
        b3[k][2] = b2[j][2];
        j++;
        k++;
    }

    b3[0][2] = k - 1;
}
void printadd(int b[100][3])
{
    int i, t;
    t = b[0][2];
    cout<<"The addition of two entered sparse matrices is:\n";
    cout<<"\nRow\tColumn\tValue";
    for (i = 1; i <= t; i++)
        cout<<b[i][0]<<b[i][1]<<b[i][2];
}
int main()
{
    int b1[100][3], b2[100][3], b3[100][3], i, dig1, dig2, m1, n1, m2, n2;
    int m,n;
    cout<<"\nMATRIX 1:\nEnter no. of rows and columns: ";
    cin>>m>>n;
    cout<<"Enter no. of non zero digits in a sparse matrix: ";
    cin>>dig1;
    b1[0][0] = m1;
    b1[0][1] = n1;
    b1[0][2] = dig1;
    cout<<"Enter the triplets(row,column,value):\n";
    for (i = 1; i <= dig1; i++)
        cin>>b1[i][0]>>b1[i][1]>>b1[i][2];

    cout<<"\nMATRIX 2:\nEnter no. of rows and columns: ";
    cin>>m2>>n2;
    cout<<"Enter no. of non zero digits in a sparse matrix: ";
    cin>>dig2;
    b2[0][0] = m2;
    b2[0][1] = n2;
    b2[0][2] = dig2;
    cout<<"Enter the triplets(row,column,value):\n";
    for (i = 1; i <= dig2; i++)
        cin>>b2[i][0]>>b2[i][1]>>b2[i][2];

    add(b1, b2, b3);
    printadd(b3);
    return 0;
}