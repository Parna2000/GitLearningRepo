#include <stdio.h>
int main()
{
    int n;
    printf("Enter the length of the array:");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int p = arr[0];
    printf("Choose any one of the following:\n1. Maximum element of the array\n2. Minimum element of the array\n");
    int choice;
    scanf("%d",&choice);
    if (choice == 1)
    {
        for (int i = 0; i < n; i++)
        {
            // scanf("%d",&arr[i]);
            if (arr[0]<arr[i])
            {
                /* code */
                p=arr[i];
            }
        }
        printf("The maximum element of the array is: %d\n",p);
    }
    if (choice == 2)
    {
        for (int i = 0; i < n; i++)
        {
            // scanf("%d",&arr[i]);
            if (arr[0]>arr[i])
            {
                /* code */
                p=arr[i];
            }
        }
        printf("The minimum element of the array is: %d\n",p);
    }
}