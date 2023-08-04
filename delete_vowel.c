#include<stdio.h>
void vowel(char str1[100])
{
    int n=strlen(str1);
    for(int i=0;i<n;i++){
    if(str1[i]=='a'||str1[i]=='e'||str1[i]=='i'||str1[i]=='o'||str1[i]=='u')
    {
        continue;
    }
    else
        printf("%c",str1[i]);


}
}
int main(){

  char str1[100];
  printf("enter the string");
  scanf("%s",str1);
  //gets(str1);
  vowel(str1);

}


