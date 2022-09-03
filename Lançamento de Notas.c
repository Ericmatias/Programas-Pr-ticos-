/*  Este programa irá ler várias notas até que seja digitado '-1'.
Criado por Eric Matias | UEG | Sistemas de Informação.*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(void){
	setlocale(LC_ALL,"portuguese");
	int num;
	float notas;
	printf("Digite as notas ou -1 para sair\n");
	
	do{
		scanf("%f",&notas);

	}while( notas >= 0);
	
	printf("Notas lançadas\n");
	
	system("pause");
	return 0;
	}
