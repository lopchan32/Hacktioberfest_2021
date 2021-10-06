#include<stdio.h>
#include<string.h>

int main(){
   char name[30][25],temp[25];
   int i,j,n;
   printf("enter how many students");
   scanf("%d",&n);
   for(i=0;i<n;i++)
   {
       printf("\n enter the name of the student");
       scanf("%s",name[i]);
   }
   for(i=0;i<n;i++)
   {
       for ( j = i+1; j < n; j++)
       {
        
       
       
       if(strcmp(name[i],name[j])>0){
           strcpy(temp,name[i]);
           strcpy(name[i],name[j]);
           strcpy(name[j],temp);
       }
       }
   }


for( i = 0; i < n; i++)
{
    printf("\n%s",name[i]);

}
return 0 ;
}
