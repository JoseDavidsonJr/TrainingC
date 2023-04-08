#include <stdio.h>

int main(){
    int gradesQuantity, i;

    printf("Grades quantity: ");
    scanf("%d", &gradesQuantity);

    float examGrades, sumGrades;
    
    for(i= 0; gradesQuantity>i; i++){
        printf("Type exam grade %d: ", i+1);
        scanf("%f", &examGrades);

        sumGrades = sumGrades+ examGrades;
    }
    
    printf("Arithmetic average of grades is: %.2f \n", sumGrades/i);
    
    if(sumGrades/i <= 2.99){
        printf("Failed");
    }else if(sumGrades/i <= 6.99){
        printf("Final exam");
    }else{
        printf("Approved");
    }


    return 0;
}