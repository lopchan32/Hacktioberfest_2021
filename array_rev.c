#include <stdio.h>
int main()
{
    int n;
    int arr[50];
    printf("Enter the size of an Array : ");
    scanf("%d", &n);
    printf("Enter the elements of an Array : ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("The Array before reversal is : \n");
    for (int i = 0; i < n; i++)
    {
        printf("The index %d element is %d \n", i, arr[i]);
    }
    printf("The Array after reversal is : \n");
    int temp;
    for (int i = 0; i < n / 2; i++)
    {
        temp = arr[i];
        arr[i] = arr[n - 1 - i];
        arr[n - 1 - i] = temp;
    }

    for (int i = 0; i < n; i++)
    {
        printf("The index %d element is %d \n", i, arr[i]);
    }
    return 0;
}