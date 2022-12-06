#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese_Brazil");
	
	int cod_empregado, ano_atual, ano_nascimento, ano_ingresso, idade, tempo;
	
	printf("\t\t\t\tCalculadora de aposentadoria por tempo de trabalho\n\n");
	
	printf("1. Informe o código do empregado: ");
	scanf("%d", &cod_empregado);
	
	printf("2. Informe o ano atual: ");
	scanf("%d", &ano_atual);
	
	printf("3. Informe o ano de nascimento do empregado: ");
	scanf("%d", &ano_nascimento);
	
	printf("4. Informe o ano de ingresso do empregado na empresa: ");
	scanf("%d", &ano_ingresso);
	
	printf("\n\n");
	idade = ano_atual - ano_nascimento;
	tempo = ano_atual - ano_ingresso; 
	
	if((idade>=65 || tempo>=30) || (idade>=60 && tempo>=25)){
			printf("Idade: %d Anos\nTempo de Trabalho: %d Anos\n", idade, tempo);
			printf("Requer aposentadoria\n");
		}else{
			printf("Idade: %d Anos\nTempo de Trabalho: %d Anos\n", idade, tempo);
			printf("Não requerer\n");
	}
	
	return 0;
}
