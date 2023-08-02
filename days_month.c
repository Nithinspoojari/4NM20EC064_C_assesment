#include <stdio.h>
#include <stdlib.h>
int main(){
      char month;
      printf("Enter the month:");
      scanf("%d",&month);
      if(month==2)
         printf("number of days=28/29");
      else if(month==1||month==3||month==5||month==7||month==8||month==10||month==12)
        printf("number of days=31");
      else if(month==4||month==6||month==9||month==11)
        printf("number of days=30");
      else
        printf("invalid month");

      return 0;



}

