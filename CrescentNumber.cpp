#include <stdio.h>

int main(){
    int number1, number2, number3;

    printf("Type number: ");
    scanf("%d", &number1);

    printf("Type number: ");
    scanf("%d", &number2);

    printf("Type number: ");
    scanf("%d", &number3);

    if(number1 >= number2 && number1 >= number3){
          if(number2 >= number3){
               printf("%d %d %d", number3, number2, number1);

          }else{
               printf("%d %d %d", number2, number3, number1);
          }

    }

     else if(number2 >= number1 && number2 >= number3){
          if(number1 >= number3){
               printf("%d %d %d", number3, number1, number2);

          }else{
               printf("%d %d %d", number1, number3, number2);
          }

    }

    else{
          if(number2 >= number1){
               printf("%d %d %d", number1, number2, number3);

          }else{
               printf("%d %d %d", number2, number1, number3);
          }

    }

    return 0;
}