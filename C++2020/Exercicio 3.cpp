#include<stdio.h>
#include<locale.h>
#include<stdlib.h>
#include<math.h>
main()
{
	setlocale(LC_ALL,"Portuguese");
	system("color A");
	printf(LC_ALL,"Portuguese");
	float n1, n2, n3, media;
	printf("Digite um núemro : ");
	scanf("%f",&n1);
	printf("Digite um núemro : ");
	scanf("%f",&n2);
	printf("Digite um núemro : ");
	scanf("%f",&n3);
	printf("A média dos números é : %2.1f",media=(n1+n2+n3)/3);
}

		
