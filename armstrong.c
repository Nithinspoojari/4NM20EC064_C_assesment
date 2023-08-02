#include<stdio.h>

int arm(int num)
{
int n=num,cnt=0,ar=0;
while(n!=0)
    {
    n=n/10;
    cnt++;
    }
while(num!=0)
    {
    int count=cnt,n2=1;
    int n3=num%10;
    while(count>0)
    {
        n2*=n3;
        count--;
    }
    ar=ar+n2;
    num=num/10;

    }
return ar;
}

int main()
{
int num,num1;
printf("Enter the number:");
scanf("%d",&num);
num1=arm(num);
if(num1==num)
{
  printf("%d is an Armstrong number",num);
}
else
{
    printf("%d is not an Armstrong number",num);
}
return 0;
}
