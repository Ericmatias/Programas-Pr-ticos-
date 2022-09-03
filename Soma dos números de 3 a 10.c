// Desenvolva um algoritmo para calcular e escrever a soma de todos os números de 3 e 10.
// Eric Matias F. Dias Sistemas De Informação.
#include <stdio.h>
#include <stdlib.h>


int main ()
{
	int i,num,sum,add;
	num = 3;
	sum = 0;
	printf("Soma de todos os números de 3 a 10.\n");
    
	while( num <= 10 )
           {
    	sum =  sum + num;
    	num = num  + 1;
	}

  printf("%d",sum);
	return 0;
}
