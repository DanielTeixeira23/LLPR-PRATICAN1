#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese_Brazil");
	
	printf("\t\t\tMédia aritmética das notas dos alunos\n\n");
	
	int total_alunos;
	float notas, media, total_notas=0;
	
	printf("Informe a quantidade de alunos: ");
	scanf("%d", &total_alunos);
	printf("\n");
	
	for(int i=1; i<=total_alunos; i++){
		printf("Informe as notas dos alunos: ");
		scanf("%f", &notas);
		total_notas = total_notas + notas;
	}
	
	media =  total_notas/total_alunos;
	printf("\n\n");
	printf("A média das notas informadas é: %.2f", media);
	
	return 0;
}
