#include<stdio.h>
#include<locale.h>
#include<stdlib.h>
#include<math.h>
main()
{
	setlocale(LC_ALL,"Portuguese");
		system("color A");
		printf(LC_ALL,"Portuguese");
		float salario_hr_aula, desconto_do_inss, inss, salario_liquido;
		printf("Digite quanto o professor ganha por hora : ");
		scanf("%f",&salario_hr_aula);
		printf("Digite quanto o INSS desconta de 0 a 100 : ");
		scanf("%f",&inss);
		desconto_do_inss=(salario_hr_aula*inss/100);
		printf("O salário liquido do professor por hora é : %2.1f",salario_hr_aula - desconto_do_inss);
		
}
		
		
