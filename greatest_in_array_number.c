#include <stdio.h>
int main()
{
    int a;
    printf("Enter a number you want the loop of: ");
    scanf("%d", &a);

    int num[a];

    int b;

    for (int i = 0; i <= a; i++)
    {
        printf("Enter a number: ");
        scanf("%d", &num[i]);
    }

    for (int i = 0; i <= a; ++i)
    {
        for (int j = i + 1; j <= a; ++j)
        {
            if (num[i] > num[j])
            {
                b = num[i];
                num[i] = num[j];
                num[j] = b;
            }
        }
    }

    for (int i = 0; i <= a; i++)
    {
        printf("the arranged number are: %d\n", num[i]);
    }
    

    return 0;
}