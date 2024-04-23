#include<stdio.h>
#include<stdlib.h>
#include<math.h>

main ()
{
float cot_dolar,sal_dolar,sal_real;
printf("\t\Programa teste5\n\n");
printf("Qual a cotacao atual do dolar?\n");
scanf("%f",&cot_dolar);
printf("Qual o seu salario em reais?\n");
scanf("%f",&sal_real);
sal_real = sal_real/cot_dolar;
printf("\n\nSeu salario convertido vale %.2f dolares\n",sal_real);
system("pause");
}
