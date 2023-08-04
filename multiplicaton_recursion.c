#include<stdio.h>
int mul(int n1,int n2);
int main(){
int n1,n2;
printf("Enter the data:\n");
scanf("%d",&n1);
scanf("%d",&n2);
mul(n1,n2);
return 0;
}
int mul(int n1,int n2){
  if(n2==0)
    return 0;
 mul(n1,n2-1);
printf("%dX%d=%d\n",n1,n2,n1*n2);


}
