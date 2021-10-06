#include <stdio.h>
int main()
{
    printf("The first 10 even number are: ");
    for (int i = 1; i <= 10; i++)
    {
        if (i % 2 == 0)
        {
            printf("%d ", i);
        }
    }
    return 0;
}sni