#include <stdio.h>

int main(){
    int salary, decreasedSalary;

    printf("Type salary: ");
    scanf("%d", &salary);

    decreasedSalary = salary*0.10;

    printf("The decreased salary is %d", decreasedSalary);

    return 0;
}