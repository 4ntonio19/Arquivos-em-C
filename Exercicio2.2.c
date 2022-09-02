#include<stdlib.h>
#include<stdio.h>
#include<math.h>

int main(){
float delta, x1, x2, a, b, c;
double raiz_delta;
printf("Insira o valor de a:");
scanf("%f", &a);

printf("Insira o valor de b:");
scanf("%f", &b);

printf("Insira o valor de c:");
scanf("%f", &c);

delta=(b*b)-4*(a*c);
printf("valor de delta:%f", delta);

raiz_delta=sqrt(delta);
printf("\nVALOR DA RAIZ:%f", raiz_delta);

x1=(-(b)+ raiz_delta)/2*a;

x2=(-(b)- raiz_delta)/2*a;

if (a==0||delta<0)
{
 printf("\nImpossivel calcular");
}else{
 printf("\nValor de x1:%f", x1);
 printf("\nValor de x2:%f", x2);
}
    return 1;
}    