#include <stdio.h>

int main(){
    int number1, number2 = 1, count;

    printf("Enter as many terms as you want it to perform: ");
    scanf("%d", &count);

    number2 = number2 + 3;

    for(number1 = 1; count >= 0; count--){
        printf("%d, %d, %d, ", number1, number2, number2);

        number1++;
        number2++;
    }
    
    printf("...");


    return 0;
}