#include <stdio.h>
#include <string.h>

int main(){
    int year, i, aux, initialyYear = 2005;
    float salaryIncrease = 1.5 , salary = 1000.00; 
    char employee[80];

    printf("Name of employee: ");
    scanf("%s", employee);
    
    printf("Employee %s was hired in 2005 with initial salary %.2f", employee, salary);

    printf("\n \nType the current year: ");
    scanf("%d", &year);
    printf("\n");

    aux = year - initialyYear;

    if(aux > 0){
        
        if(aux == 1){
            printf("In 2006 the salary is: %.2f", salary*salaryIncrease);

        }
        if(aux > 1){
            for (i = aux; i > 0; i--)
            {
                initialyYear++;

                printf("In %d the salary is: %.2f \n", initialyYear, salary*salaryIncrease);

                salaryIncrease = salaryIncrease*2.0;


            }
            
        }

    }
    else{
        printf("Year invalid!");

    }

    return 0;
}