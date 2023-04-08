#include <stdio.h>
#include <math.h>

int main(){
    float number1, number2;
    int option;

    printf("1:Summation \n2:Square root \n");
    printf("Choice one option: ");
    scanf("%d", &option);

    if(option >= 1 || option <= 2){
        switch(option){

            case 1:
                printf("Type one number: ");
                scanf("%f", &number1);

                printf("Type one number: ");
                scanf("%f", &number2);

                printf("Summation is: %.2f", number1+number2);

                break;
            
            case 2:
                printf("Type one number: ");
                scanf("%f", &number1);

                printf("Square root is: %.2f", powf(number1, 1.0/2.0));
                
                break;

        }
    }

    else{
        printf("Command invalid!");

    }

    return 0;
}