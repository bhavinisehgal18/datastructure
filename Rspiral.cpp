#include <stdio.h>

void print_boundary(int arr[5][5], int s_row, int s_col, int e_row, int e_col){



    if(s_row > e_row || s_col > e_col)
        return;

    for(int i=s_col; i<=e_col; i++)
    {
        printf("%d ", arr[s_row][i]);
    }
    for(int i=s_row+1; i<=e_row; i++)
    {
        printf("%d ", arr[i][e_col]);
    }
    for(int i=e_col-1; i>=s_col; i--)
    {
        printf("%d ", arr[e_row][i]);
    }

    for(int i=e_row-1; i>=s_row+1; i--)
    {
        printf("%d ", arr[i][s_col]);
    }


    print_boundary(arr, s_row+1, s_col+1, e_row-1, e_col-1);

}
int main()
{
    int a[5][5];
    int n,m ;
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

    print_boundary(a, 0, 0, n-1, m-1);
}