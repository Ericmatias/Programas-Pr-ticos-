// ALGORITMO PARA CALCULAR O FATORIAL DE UM NÚMERO | ERIC MATIAS 
// Algoritmo escrito em C para calcular o fatorial de um núemro qualquer.
#include <locale.h>
#include <stdlib.h>
#include <stdio.h>
int main(void){
	setlocale(LC_ALL,"portuguese");
	start:
	int numero,fatorial,i;
	fatorial = 1;
	printf("Digite um número para calcular o seu fatorial:");
	scanf("%d",&numero); 
	
	for(i=1; i<=numero; i++){
           fatorial = fatorial * i;		
	}
	
	
	
	 printf("Fatorial: %d\n",fatorial);
	system("pause");
	system("cls");
	goto start;
	return 0;
}
