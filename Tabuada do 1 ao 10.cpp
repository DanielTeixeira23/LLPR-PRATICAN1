#include <stdio.h>

int main(){
	
	int resultado;
	
	printf("Tabuada do 1 ao 10\n\n");
	
	for(int tab=1; tab<=10; tab++){
		for(int mult=1; mult<=10; mult++){
			resultado = tab*mult;
			printf("%d x %2d = %4d\n", tab, mult, resultado);
		}
		printf("\n");
	}
	
	return 0;
}
