#include <stdio.h>
int main()
{
    int number;
    int temp = 1;
    printf("Enter a number: \n");
    scanf("%d", &number);

    for(int a = 1; a<= number; a++){
        temp *= a;
    }
        printf("the factor of %d is: %d", number, temp);
return 0;
}



#include<stdio.h>
 int main(){
     
     int n, temp=1;
     printf("Enter number: ");
     scanf("%d", &n);
     
     while(i <= n){
         temp*=i;
         i++;
     }
     printf("The factroial of %d is : %d", n,temp);
     return 0;
     
 }
