/* Escreva um programa que imprima a tabuada de 1 ao 10, neste formato:*/
// Eric Matias | Sistemas de Informação | Universidade Estadual de Goiás.
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <math.h>
#include <locale.h>

int main ()
{
	int num,vezes;
	
	for(num=1;num<=10;num++){		
		printf(" Tabuada do %d :",num);
		for(vezes=1;vezes<=10;vezes++){
			printf(" %d, ",vezes*num);
		}
          printf("\n");
	}
	
	

	system("pause");
	return 0;
}
