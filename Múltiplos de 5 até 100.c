// Programa criado por Eric Matias F. Dias | Ericmatiasdev@gmail.com 
// Este programa vai escrever os múltiplos de 5 entre 5 até 10 utilizando uma estrutura de repetição.
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (void){
	setlocale(LC_ALL,"portuguese");
	int i;
	i = 5;
	printf("Múltiplos de 5 entre 0 e 100\n");
	
	while(i <= 100){
		  printf("%d\n",i);
		  i = i + 5;
	}
	
		system("pause");
	return 0;
}
