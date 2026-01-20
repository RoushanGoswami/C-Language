#include <stdio.h>

void main()
{

    int i, n;
    printf("Enter Size of Array : ");
    scanf("%d ", &n);
    printf("\n");
    printf("Enter Elements of Array : ");
    int arr[n];
    for (i = 0; i < n; i++)
    {
        printf("Enter arr[%d] = ", i);
        scanf("%d ", &arr[i]);
    }
}