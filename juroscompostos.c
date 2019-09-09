//Algoritmo: "Depósito com remuneração de 6%"
//Autor: Yves César Amorim de Azevedo
//Data: 08/09/2019

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    //declaração de variáveis
    float valor_total, M, n;
    float meses;
    
    //Dados de entrada 
    printf("======================== \n");
    	printf("\n   Desposito com Juros \n ");
    printf("\n========================\n");
    
    printf("\nDigite o valor do deposito: R$");
    	scanf("%f", &valor_total);
    printf("Em quantos meses de remuneracao: ");
    	scanf("%f", &meses);
    printf("A taxa de juros por mes e de 6%%"); 	
	
    //processamento
	M = valor_total * pow((1 + 0.06), meses);  

    //dados de saída
	printf("\nO valor R$%.2f apos %.0f meses, fica no total de: R$%.2f \n", valor_total, meses, M);
		
		//Detalhamento do processo:
			printf("\n === Detalhamento de Remuneracao === \n");
			n = 1;
				while(n <= meses) {
					printf(" - O saldo no mes %.0f e de: R$%.2f \n", n, valor_total*pow((1+0.06), n));
					n++;
				}
		    
    system("pause");
return 0;
}
