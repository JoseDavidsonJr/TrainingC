#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct aluno Aluno;

struct aluno{
    char nome[81];
    float nota;
};

void main(){	
 	
 	int i = 0;
 	float nota;
 	char nome[81];
 	Aluno alunos[2] = {0};
	
	for(i =0; i<2; i++){
		printf("Digite o nome do estudante: ");
		scanf("%s", &nome);
		printf("Digite a nota de %s: ", nome);
		scanf("%f", &nota);
		
		strcpy(alunos[i].nome, nome);
		alunos[i].nota = nota;
		printf("A nota de %s foi %.2f \n", alunos[i].nome, alunos[i].nota);
		printf("\n");
			}		
			
	int comparador( Aluno*a, Aluno*b){
	 if(a->nota == b->nota){
	 	
	 	if (a->nome == b->nome)
	 		return 0;
	 		
	 	else if (a->nome > b->nome)
	 		return -1;
	 	else
	 		return 1;
		 }
  	 else if (a->nota > b->nota)
		return -1;
	 else
		return 1;
			}
			
 	qsort(alunos, 2, sizeof(Aluno), comparador);
 	printf("A ordem dos estudantes ficou: \n");
 	 	
	for(i =0; i<2; i++){
		printf("%s nota: %.2f \n", alunos[i].nome, alunos[i].nota);
	}
}
