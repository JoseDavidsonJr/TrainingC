#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TOTAL 2

struct game{
    char namePlayer[100];
};

typedef struct game Player;

int main(){
    Player match[TOTAL];
    int x, y=1, life1=1, life2=1, ammunition1=0, ammunition2=0, choice;
    FILE *file;

    for(x=0; x<TOTAL; x++){
		printf("Enter player %d name: ", y);
		scanf("%s", &match[x].namePlayer);

		y++;
		fflush(stdin);
		
		}

    for(life1 == 1, life2 == 1; life1>=1 && life2>=1;){
    	
		printf("\n \n");
    	printf("Fire: 1 \n");
    	printf("Reload: 2 \n");
    	printf("Protect: 3 \n");
		printf("Choose your action: ");
		scanf("%d", &choice);
		printf("\n");
    	
    	int a = rand() %3;
    	switch (choice){
			case 1:
			if(a == 1){
				if(ammunition1>0 && ammunition2>0 && life1==1 && life2==1){
					printf("Both of the players lost! \n");

					ammunition1--;
					ammunition2--;
					life1--;
					life2--;

				}
				
				if(ammunition1>0 && ammunition2==0 && life1==1 && life2==1){
					printf("Player 1 beat Player 2 \n");

					ammunition1--;
					life2--;

				}
				
				if(ammunition1==0 && ammunition2>0 && life1==1 && life2==1){
					printf("The computer managed to beat you \n");

					ammunition2--;
					life1--;

				}
				
				if(ammunition1==0 && ammunition2==0 && life1==1 && life2==1){
					printf("Both don't have bullets! \n");

				}
			}
			
			if(a == 2){
				if(ammunition1>0){
					printf("You have defeated your opponent! \n");
					ammunition1--;
					ammunition2++;
					life2--;
				}
				
				else{
					printf("Reload before shooting! \n");
					ammunition2++;
				}
			}
			
			if(a == 3){
				if(ammunition1>0){
					printf("The opponent defended from your shot! \n");
					ammunition1--;
				}
				
				else{
					printf("The opponent defended himself, but when he shot he was out of bullets!");
					ammunition2++;
				}
			}
			
			break;

			case 2:
			if(a == 1){
				if(ammunition2>0){
					printf("The opponent won the game! \n");

					ammunition1++;
					ammunition2--;
					life1--;

				}
				
				else{
					printf("The opponent fired but had no ammunition! \n");

					ammunition1++;

				}
			}
			
			if(a == 2){
				printf("Both reloaded their weapons! \n");

				ammunition1++;
				ammunition2++;

			}
			
			if(a == 3){
				printf("While reloading, the opponent took cover! \n");

			}

			break;
		
			case 3:
			if(a == 1){
				printf("The opponent shot but managed to protect himself! \n");

				ammunition2--;

			}
			
			if(a == 2){
				printf("The opponent has reloaded his weapon! \n");

				ammunition2++;

			}
			
			if(a == 3){
				printf("Nothing happens as they both hid! \n");

			}

			break;

			}
			
			printf("\nYour remaining ammo: %d\n", ammunition1);
			printf("Computer ammo left: %d\n", ammunition2);

			}

			file = fopen("Game007.txt", "wt");
			if(file == NULL){
				printf("\nAn error occurred while creating a file!");

			}
			else{
				fprintf(file,"Result of the shooting game!\n");

				if(life1>life2){
					x=0;
					fprintf(file, "Player winner: %s\n", match[x].namePlayer);

				}
				
				else{
					x=1;
					fprintf(file, "Player winner: %s\n", match[x].namePlayer);

				}

				fprintf(file,"\nCompetitors' remaining ammo was: \n");
				fprintf(file,"Competitor 1 ammo was: %d\n", ammunition1);
				fprintf(file,"Competitor 2 ammo was: %d\n", ammunition2);

				fclose(file);

				printf("Report created successfully \n");

			}

    return 0;
}
