#include <stdlib.h>
#include <stdio.h>


void imprime_ola()
{
	printf("Bem vindo!\n\n");
}

void soma(int numero1, int numero2)
{
	int soma;
	soma= numero1 + numero2;
	printf("\nResultado = %d", soma);
}
void sub(int numero1, int numero2)
{
	int sub;
	sub= numero1 - numero2;
	printf("\nResultado = %d", sub);
}
void mult(int numero1, int numero2)
{
	int mult;
	mult= numero1 * numero2;
	printf("\nResultado = %d", mult);
}
void divisao(int numero1, int numero2)
{
	float divisao;
	divisao= numero1 / numero2;
	printf("\nResultado = %f", divisao);
}
      
int main()
{
	imprime_ola();
	int numero1, numero2, opcao;
	printf("Digite um numero:\n");
	scanf("%d", &numero1);
	
	printf("\nDigite mais um numero:\n");
	scanf("%d", &numero2);
	
	printf("Escolha a operacao desejada:\n");
	
	printf("1-Soma\n");
	
	printf("2-Subtracao\n");
	
	printf("3-Multiplicacao\n");
	
	printf("4-Divisao\n\n");
	scanf("%d", &opcao);
	
switch(opcao){
	
	case 1:{soma(numero1, numero2);}break;
	case 2:{sub(numero1, numero2);}break;
	case 3:{mult(numero1, numero2);}break;
	case 4:{divisao(numero1, numero2);}break;
	default:{printf("opcao invalida");}
}
		
	return 1;
	
}
