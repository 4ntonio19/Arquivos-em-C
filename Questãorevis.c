#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
int main(){
setlocale(LC_ALL, "PORTUGUESE");

int i, idade, a=0;

	for(i=0; i<4; i++)
	{
		printf("Digite sua idade:\n");
		scanf("%d", &idade);
		
	if(idade>=20 && idade <=30)
	{2;
	a++;
	}		
	}
	printf("quantidade de pessoas nessa faixa de idade e: %i\n", a);

return 1;}