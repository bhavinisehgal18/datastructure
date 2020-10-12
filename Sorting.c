#include <stdio.h>

int main()
{
    int arr[100];
    int n, i, j, tmp;		
       
    printf("Number of elements in array:\n");
    scanf("%d", &n);

    printf("Elements:\n", n);
    for(i=0;i<n;i++)
	     
	    scanf("%d", &arr[i]);

    for(i=0; i<n; i++)
    {
        for(j=i+1; j<n; j++)
        {
            if(arr[j] <arr[i])
            {
                tmp = arr[i];
                arr[i] = arr[j];
                arr[j] = tmp;
            }
        }
    }
    printf("Final araay:\n");
    for(i=0; i<n; i++)
    {
        printf("%d  ", arr[i]);
    }
    return 0;
	        
}
