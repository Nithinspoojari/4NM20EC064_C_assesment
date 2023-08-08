#include<stdio.h>
#include<string.h>

int main(){

char str[100];
printf("Enter the string:");
scanf("%s",&str);
int n=strlen(str);
/*while(i<n){
    if(str[i]>='A'&&str[i]<='Z')
     str[i]=str[i]+32;
    i++;
}*/

for(int i=0;i<n;i++)
    {
    for(int j=i+1;j<n;j++)
    {
    if(str[i]>str[j])
    {
    char temp=str[i];
    str[i]=str[j];
    str[j]=temp;
    }
    }
}
for(int i=0;i<n;i)
{
         int k=0;
        for(int j=i;j<n;j++)
            {
            if(str[i]==str[j])
            {
                k++;
            }

            }
            printf("%c=%d\n",str[i],k);
            i=k+i;

}



return 0;
}




