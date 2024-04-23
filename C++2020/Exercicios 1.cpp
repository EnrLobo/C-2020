#include<stdio.h>
#include<locale.h>
#include<stdlib.h>
#include<math.h>
main()
{
	setlocale(LC_ALL,"Portuguese");
	system("color A");
	printf("\n Exercicio numero 1");
	float n1=8, n2=9, n3=7, n4=4, n5=5, n6=6, soma, media1, media2, mediafinal;
		printf("\n A media dos números 8,7,9 : %2.1f",media1 = (n1+n2+n3)/3);	
		printf("\n A média dos números 4,5,6 : %2.1f",media2 = (n4+n5+n6)/3);
		printf("\n A soma das duas média é : %2.1f",soma = media1+media2);
		printf("\n A média final é : %2.1f",mediafinal = soma/2);
		
		

}
