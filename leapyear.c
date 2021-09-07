#include <stdio.h>
#include <stdbool.h>

bool is_leap(int year);


int main(){
    int year;
    bool result;

    scanf("%d",&year);
 
result = is_leap(year);

  if (result) {
      
    printf("%s","true");
  }
    else {
         printf("%s","false");
    } 

    return 0;
}

bool is_leap(int year)
{
    bool result;

   if(((year % 400)==0) && ((year % 100)== 0)) {
        result = 1;
    }
    else if ((year %100) == 0) { 
        result = 0;
    }

    else if ((year % 4)==0) {
        result = 1;
    }
    else 
    result = 0;
    
    return result;

}

