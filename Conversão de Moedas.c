/* Algoritmo que calcula a conversão de duas moedas, dependendo da cotação da moeda do dia que o usuário digitar | Criado por Eric Matias | Universidade Estadual de Goiás | Sistemas de Informação | . */

	#include <stdio.h>
	#include <stdlib.h>
	#include <math.h>
	#include <locale.h>
	int opcao;
	float cot,dolar,conversao,cotkwanza,conv_kwanza,conversao_kwanza;
	
	int main (void)
	
	{
			
		inicio :
				setlocale(LC_ALL,"portuguese");
		printf("DE QUAL MOEDA VOCÊ DESEJA CONVERTER ?\n");
		printf("[1] DOLAR\n");
		printf("[2] KWANZAS\n");
		scanf("%i", &opcao);
		
		  switch (opcao) {
		  
		  
		  case 1  : {
		  	
		  		printf(" INSIRA A COTAÇÃO DO DÓLAR:\n");
			scanf("%f",&cot);
		     printf("INSIRA VALOR EM DÓLARES\n");
		     scanf("%f", &dolar);
		     
		    conversao = cot * dolar;
			
			printf("CONVERTIDO PARA REAL: R$%.2f\n",conversao);
			break;
		  }
			
			case 2 : {
				
				printf("INSIRA A COTAÇÃO DE KWANZA\n");
				scanf("%f",&cotkwanza);
				printf("INSIRA VALOR EM KWANZAS\n");
				scanf("%f",&conv_kwanza);
				
				
				conversao_kwanza = cotkwanza *  conv_kwanza;
				
				printf("CONVERTIDO PARA KWANZA: R$%.2f\n",conversao_kwanza);
				
				break;
			}
			
		}
		
		system("pause");
		
		system("cls");
		goto inicio;
		
			return 0;
		}
