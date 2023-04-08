#include <stdio.h>

int main(){
    int I, A, B, C;


    printf("Type one number: ");
    scanf("%d", &A);

    printf("Type one number: ");
    scanf("%d", &B);

    printf("Type one number: ");
    scanf("%d", &C);


    printf("1:Growing \n2:Descending \n3:Highest number in the middle \n");
    printf("Choice one option: ");
    scanf("%d", &I);

    if(I >= 1 && I <= 3){
        switch(I){

            case 1:

                if(A >= B && A >= C){
                    if(B >= C){
                        printf("%d %d %d", C, B, A);
                    }

                    else{
                        printf("%d %d %d", B, C, A);
                    }

                }

                if(B >= A && B >= C){
                    if(A >= C){
                        printf("%d %d %d", C, A, B);
                    }

                    else{
                        printf("%d %d %d", A, C, B);
                    }

                }

                if(C >= A && C >= B){
                    if(A >= B){
                        printf("%d %d %d", B, A, C);
                    }

                    else{
                        printf("%d %d %d", A, B, C);
                    }

                }

                break;

            case 2: 

                if(A >= B && A >= C){
                    if(B >= C){
                        printf("%d %d %d", A, B, C);
                    }

                    else{
                        printf("%d %d %d", A, C, B);
                    }

                }

                if(B >= A && B >= C){
                    if(A >= C){
                        printf("%d %d %d", B, A, C);
                    }

                    else{
                        printf("%d %d %d", B, C, A);
                    }

                }

                if(C >= A && C >= B){
                    if(A >= B){
                        printf("%d %d %d", C, A, B);
                    }

                    else{
                        printf("%d %d %d", C, B, A);
                    }

                }

                break;

            case 3:
                if(A >= B && A >= C){
                    if(B >= C){
                        printf("%d %d %d", C, A, B);
                    }
                    else{
                        printf("%d %d %d", B, A, C);
                    }
                }

                if(B >= A && B >= C){
                    if(A >= C){
                        printf("%d %d %d", C, B, A);
                    }
                    else{
                        printf("%d %d %d", A, B, C);
                    }
                }

                if(C >= A && C >= B){
                    if(A >= B){
                        printf("%d %d %d", B, C, A);
                    }
                    else{
                        printf("%d %d %d", A, C, B);
                    }
                }

                break;

        }
    }

    else{
        printf("Command invalid!");
    }
    
    return 0;
}