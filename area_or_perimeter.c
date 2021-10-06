#include <stdio.h>
int main()
{
    int a = 10;
    int length, breadth, area, perimeter, side;
    char choose;
    printf("Enter choose what you want to find:\n");
    printf("Enter 'a' to find area \nEnter 'b' to find peramater\n");
    scanf("%c", &choose);
    switch(choose)
    {
    case 'a':

        printf("Enter the length: \n");
        scanf("%d", &length);

        printf("Enter the breadth: \n");
        scanf("%d", &breadth);

        area = length * breadth;

        printf("The area of you entered data length = '%d' and breadth = '%d'  is : %d\n",length, breadth, length * breadth);

        break;

    case 'p':
        printf("Enter a length of one side:\n");
        scanf("%d", &side);
        perimeter = 4 * side;
        printf("The perimeter of square you enteed %d side is : %d\n", side, perimeter);
        break;

    default:
        printf("you input is wrong please re-enter the type");
        break;
    }
    return 0;
}