#include <stdio.h>

int main(){
    float testGrade, workLaboratory, examFinal, result;

    printf("Type test grade: ");
    scanf("%f", &testGrade);
    result = 3*testGrade;

    printf("Type grade work in the laboratory: ");
    scanf("%f", &workLaboratory);
    result = (2*workLaboratory)+result;

    printf("Type grade examFinal: ");
    scanf("%f", &examFinal);
    result = ((5*examFinal)+result)/10;

    printf("Grade final is: %.2f \n", result);

    if(result >=8){
        printf("With base concept A");
    }else if(result>=7){
        printf("With base concept B");
    }else if(result>=6){
        printf("With base concept C");
    }else if (result>=5){
        printf("With base concept D");
    }else{
        printf("With base concept E");
    }
    
    return 0;    
}