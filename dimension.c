#include<stdio.h>

int main(){
   int m,n;
   printf("Enter the row:");
   scanf("%d",&m);
   printf("Enter the coloumn:");
   scanf("%d",&n);

   for(int i=0;i<m;i++){
   for(int j=0;j<n;j++){
       if(i%2==0&&j%2==0)
         printf("*\t");
      else
            printf("1\t");
   }
      printf("\n");
        }
        return 0;

}
