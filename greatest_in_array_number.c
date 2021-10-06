#include <stdio.h>
int main()
{
    int a,b,i,j;
    int num[100];
    
    printf("Enter a number you want the loop of: ");
    scanf("%d", &a);

    for (i = 0; i < a; i++)
    {
        printf("Enter a number: ");
        scanf("%d", &num[i]);
    }

    for (i = 0; i <= a; i++)
    {
        for (j = i + 1; j <= a; j++)
        {
            if (num[i] < num[j])
            {
                b = num[i];
                num[i] = num[j];
                num[j] = b;
            }
        }
    }
    
    printf("The Sorted Elements are : \n ");
    for (i = 0; i < a; i++)
    {
        printf("%d ", num[i]);
    }
    

    return 0;
}
