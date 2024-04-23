#include<stdio.h>
#include<locale.h>
#include<stdlib.h>
#include<math.h>
main()
{
setlocale(LC_ALL,"Portuguese");
	system("color A");
	printf(LC_ALL,"Portuguese");
	float valor1, valorfinal, valor_da_porcentagem;
	printf("Digite um número : ");
	scanf("%f",&valor1);
	valor_da_porcentagem = valor1*10/100;
	printf("O valor escrito com reajuste de 10 por cento é : %2.1f",valorfinal=valor1+valor_da_porcentagem);	
}
	
