#include <stdio.h>

void matrixmultiply(int arr[10][10], int arr1[10][10], int c[10][10], int f_row , int f_col, int s_col )
{
    static int sum, i= 0,j= 0,k= 0;

    if(i < f_row)
    {
        if(j < s_col)
        {
            if(k < f_col)
            {

                sum = sum + arr[i][k]*arr1[k][j];
                k++;
                matrixmultiply(arr,arr1,c,f_row,f_col,s_col);

            }
            c[i][j] = sum;
            sum = 0;
            k = 0;
            j++;
            matrixmultiply(arr,arr1,c,f_row,f_col,s_col);

        }
        j = 0;
        i++;
        matrixmultiply(arr,arr1,c, f_row,f_col,s_col);
    }



}
int main()
{
    int a[10][10];
    int b[10][10];
    int c[10][10]={0};
    int n , m , s;
    printf("First Matrix: \n");
    printf("Enter the size of row\n");
    scanf("%d",&n);
    printf("Enter the size of coloum\n");
    scanf("%d",&m);
    printf("Enter the array\n");
    for(int i = 0; i < n ;i++)
    {

        for(int j = 0;j<m ; j++)
        {

            scanf("%d",&a[i][j]);
        }
    }

    printf("Second Matrix: \n");
    printf("Enter the size of row\n");
    scanf("%d",&m);
    printf("Enter the size of coloum\n");
    scanf("%d",&s);
    printf("Enter the array\n");
    for(int i = 0; i < m ;i++)
    {

        for(int j = 0;j<s ; j++)
        {

            scanf("%d",&b[i][j]);
        }
    }
    matrixmultiply(a,b,c,n,m,s);

    for(int i = 0; i < n ;i++)
    {
        for(int j = 0;j < s; j++)
        {
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }
}