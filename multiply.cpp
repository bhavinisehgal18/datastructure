#include <stdio.h>
#include<iostream>
using namespace std;

void print(int k[3][100], int count)
{
    int i, j;
    cout<<"The triplet representation after multiplication is:\n";
    for (j = 0; j < 3; j++)
    {
        if (j == 0)
            cout<<"Row:\t";
        else if (j == 1)
            cout<<"Column:\t";
        else
            cout<<"Value:\t";

        for (i = 0; i < count; i++)
            cout<< k[j][i];

        cout<<endl;
    }
}

void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

void sort(int k[3][100], int count)
{
    int i, j;
    for (i = 0; i < count; i++)
    {
        for (j = 0; j < count - i - 1; j++)
        {

            if (k[0][j] > k[0][j + 1])
            {

                swap(&k[0][j], &k[0][j + 1]);
                swap(&k[1][j], &k[1][j + 1]);
                swap(&k[2][j], &k[2][j + 1]);
            }
            else if (k[0][j] == k[0][j + 1])
            {
                if (k[1][j] > k[1][j + 1])
                {
                    swap(&k[0][j], &k[0][j + 1]);
                    swap(&k[1][j], &k[1][j + 1]);
                    swap(&k[2][j], &k[2][j + 1]);
                }
            }
        }
    }
}

void transpose(int k[3][100], int count)
{
    int i, j, temp;
    cout<<endl;

    for (j = 0; j < count; j++)
        swap(&k[0][j], &k[1][j]);

    sort(k, count);
}

void multiply(int k[3][100], int l[3][100], int count, int size, int r1, int c1, int r2, int c2)
{
    int i, j, kpos, lpos, result[3][100], r, c, tempk, templ, sum, rcount = 0;

    if (c1 != r2)
    {
        cout<<"\nNot possible to multiply the above sparse matrices.";
        return;
    }

    transpose(l, size);

    for (kpos = 0; kpos < count;)
    {
        r = k[0][kpos];
        for (lpos = 0; lpos < size;)
        {
            c = l[0][lpos];

            tempk = kpos;
            templ = lpos;

            sum = 0;

            while (tempk < count && k[0][tempk] == r && templ < size && l[0][templ] == c)
            {
                if (k[1][tempk] < l[1][templ])
                    tempk++;
                else if (l[1][templ] < k[1][tempk])
                    templ++;
                else
                    sum += k[2][tempk++] * l[2][templ++];
            }

            if (sum != 0)
            {
                result[0][rcount] = r;
                result[1][rcount] = c;
                result[2][rcount] = sum;
                rcount++;
            }
            while (lpos < size && l[0][lpos] == c)
                lpos++;
        }
        while (kpos < count && k[0][kpos] == r)
            kpos++;
    }

    print(result, rcount);
}

int main()
{
    int a[20][20], b[20][20], k[3][100], l[3][100], i, j, m, n, r, c, count = 0, size = 0;

    cout<<"MATRIX-1:\nEnter no of rows and coloumns: ";
    cin>>m>>n;
    cout<<"Input sparse matrix:\n";
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            cin>>a[i][j];
            if (a[i][j])
            {
                k[0][count] = i;
                k[1][count] = j;
                k[2][count] = a[i][j];
                count++;
            }
        }
    }

    cout<<"MATRIX-2:\nEnter no of rows and columns: ";
    cin>>r>>c;
    cout<<"Input sparse matrix:\n";
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            cin>>b[i][j];
            if (b[i][j])
            {
                l[0][size] = i;
                l[1][size] = j;
                l[2][size] = b[i][j];
                size++;
            }
        }
    }

    multiply(k, l, count, size, m, n, r, c);
}