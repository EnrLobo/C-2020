#include<stdio.h>
#include<locale.h>
#include<stdlib.h>
#include<math.h>
main()
{
		setlocale(LC_ALL,"Portuguese");
		system("color A");
		printf(LC_ALL,"Portuguese");
		float numero, quadrado;
		printf("Digite um número : ");
		scanf("%f",&numero);
		printf("O quadrado do número é : %2.1f",quadrado = numero*numero);
	
}
	
