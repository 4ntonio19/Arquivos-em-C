#include<stdlib.h>
#include<stdio.h>
#include<math.h>

int  main(){
int opcao, pedidos;
float total1, total2, total3, total4, total5, cachorro, salada, bacon, torrada, refri;
printf("Escolha a opcao desejada:\n1-Cachorro Quente R$4.00\n2-X-salada R$4.50\n3-X-bacon R$5.00\n4-Torrada simples R$2.00\n5-Refrigerante R$1.50\n");
scanf("%d", &opcao);

printf("Insira a quantidade de pedidos:");
scanf("%d", &pedidos);
cachorro=4.00;
salada=4.50;
bacon=5.00;
torrada=2.00;
refri=1.50;

total1=pedidos*cachorro;
total2=pedidos*salada;
total3=pedidos*bacon;
total4=pedidos*torrada;
total5=pedidos*refri;
    
if (opcao==1)
{
    printf("TOTAL: R$%.2f", total1);
}if (opcao==2)
{
    printf("TOTAL: R$%.2f", total2);
}if (opcao==3)
{
    printf("TOTAL: R$%.2f", total3);
}if (opcao==4)
{
    printf("TOTAL: R$%.2f", total4);
}if (opcao==5)
{
    printf("TOTAL: R$%.2f", total5);
}

return 1;
}
