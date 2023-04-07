#include <stdio.h>

int main(){
    int number, sum = 0, i;

    for(i=0; i<4; i++){
        printf("Write one number: ");
        scanf("%d", &number);
        sum = number + sum;
    }

    printf("The sum of the four numbers are: %d", sum);

    return 0;
}