#include <stdio.h>

int main(){
    int number1, number2;

    printf("Type the first number: ");
    scanf("%d", &number1);

    printf("Type the second number: ");
    scanf("%d", &number2);

    if(number1>number2){
        printf("First number: %d > Second number: %d", number1, number2);
    }else{
        printf("Second number: %d > First number: %d", number2, number1);
    }

    return 0;
}