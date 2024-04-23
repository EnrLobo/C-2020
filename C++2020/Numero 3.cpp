//3- Foi feita uma pesquisa entre os habitantes de uma região. Foram
//coletados os dados de idade,
//sexo (M/F) e salário. Faça um programa que calcule e mostre:
//a) A média dos salários do grupo;
//b) A maior e a menor idade do grupo;
//c) A quantidade de mulheres na região;
//d) A idade e o sexo da pessoa que possui o menor salário;
//Finalize a entrada de dados ao ser digitada uma idade negativa.
//(2 pontos)

#include<stdio.h>
#include<stdlib.h>

main()
{
char sex = 0,sex_menorsalario = 0;
int idade,maior,menor,idade_menorsalario,qtd_mulheres,qtidadehabit;
double salario,menorsalario=1,soma_do_salario;

idade = 0;
qtidadehabit = 0;
qtd_mulheres= 0;
maior = 0;
menor = 200;
idade_menorsalario = 9999;
salario = 0;
soma_do_salario =0;

while(idade >=0)
    {
       printf(" \n * Informe a idade do entrevistado: ");
       scanf("%d",&idade);

      if(idade < 0)
       {
        break; 
       }
      printf("\n Sexo <M/F>: "); 
      scanf("%s",&sex);
      if(sex =='F')
       {
         qtd_mulheres =qtd_mulheres+ 1;
       }

      printf("\n Informe o Salario: R$");
      scanf("%d",&salario);

      if(salario >= 0 )
       {
         soma_do_salario = soma_do_salario + salario;
         qtidadehabit = qtidadehabit +1;
        }

        if(idade > maior)
        {
          maior =idade;
         }

      if(idade < menor)
       {
        menor = idade;
       }

      if(salario < menorsalario)
       {
         menorsalario=salario;
         idade_menorsalario = idade;
         sex_menorsalario = sex;
       }

 } 
     printf("\n\t Fim programa \n");

     printf("\n Media dos salarios do grupo: R$ %d \n",soma_do_salario/qtidadehabit);
     printf(" Menor idade: %d anos \n",menor);
     printf(" Maior idade: %d anos \n",maior);
     printf("\n A quantidade de mulheres na regiao = %d ",qtd_mulheres);
     printf("\n A idade da pessoa e o sexo do que possui o menor salario, foi : %d anos , do sexo :%c \n",idade_menorsalario,sex_menorsalario);

return 0;
}

