//Contagem e soma de números.
/* Este programa irá ler números que serão inseridos pelos usuários até que seja digitado o número '0'
logo após isso o sistema irá retornar quantos números foram digitados e a soma dos números digitados
Criado por Eric Matias | Sistemas de Informação.*\
#include <stdio.h>
#include <stdlib.h>

int
main ()
{
	int cont,num,sum;
	num = 1;
	cont = 0;
	sum = 0;
    
  while( num != 0){
 	 
  scanf("%d",&num);
  cont = cont+1;
  sum = sum + num;
  }
   cont = cont - 1;
 printf("Foram digitados %d números:\n",cont);
 printf("A soma dos números digitados é:%d",sum);
  return 0;
}
