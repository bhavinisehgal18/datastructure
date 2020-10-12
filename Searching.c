#include <stdio.h>
 
int main()
{   
    int arr[100], n, i, num, found = 0;
 
    printf("Number of elements: \n");
    scanf("%d", &n);
    
    printf("Elements: \n ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
 
    printf("Element to be searched: \n ");
    scanf("%d", &num);

    for (i = 0; i < num ; i++)
    {
        if (num == arr[i] )
        {
            found = 1;
            break;
        }
    }
    if (found == 1)
        printf("Element is present at position:  %d", i+1);
    else
        printf("Element is not present in array \n");

    return 0;    
}