#include <stdio.h>

int main(){
    int number, sum = 0, i, numberQuantity;

    printf("Type the quantity of numbers you would like to sum: ");
    scanf("%d", &numberQuantity);

    for(i=0; i<numberQuantity; i++){
        printf("Write one number: ");
        scanf("%d", &number);
        sum = number + sum;
    }

    printf("The sum of the four numbers are: %d", sum);

    return 0;
}