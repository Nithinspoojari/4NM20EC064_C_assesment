#include<stdio.h>
#include<ctype.h>

int main(){

  char str1[100];
  char str2[100];

  int n=0;
  printf("enter the string");
  scanf("%s",&str1);
  scanf("%s",&str2);
  //printf("%s\n",str1);
  //printf("%s\n",str1);
  tolower(str1);
  tolower(str2);
  if(strlen(str1)!=strlen(str2))
    printf("false");
  else{
  for(int i=0;i<strlen(str1);i++){
    if(str1[i]==str2[i])
        n=1;
    else
        n=0;

  }
  if(n==1)
     printf("true");
  else
    printf("false");

}
return 0;
}

