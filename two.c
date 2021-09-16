#include<stdio.h>
int main(){
    int n;
    printf("Enter the length of the array:\n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++)
    {
        /* code */
        scanf("%d",&arr[i]);
    }
    int p=0;
    printf("Now we have to check whether the above array is sorted or not\n");
    for (int j = 0; j < n; j++)
    {
        /* code */
        if (arr[j]<arr[j+1]||arr[j]==arr[j+1])
        {
            p++;
            /* code */
            
            // continue;
        }
        else
        {
            /* code */
            printf("The array is not sorted!!");
            break;
        }
    }
    if (p==n-1)
    {
        /* code */
        printf("The arraay is sorted");
        printf("And your work is done");
        printf("so, don't worry");
    }
    
}