//1- Leia várias idades e calcule a média entre as idades (usar uma
//variável para idade). (1 ponto)

#include<stdio.h>
#include<stdlib.h>
main()
{
int idade, soma_das_idades=0, quantidade_idade, contador;
float media;


printf("Quantas idades serao utilizadas? ");
scanf ("%d", &quantidade_idade);
for(contador=1;contador<=quantidade_idade;contador++)
   {
     printf("Entre com a idade %d : ",contador);
     scanf("%d", &idade);
     soma_das_idades = soma_das_idades + idade;
    }

media = soma_das_idades/quantidade_idade;
printf ("\n A media de idades é de : %.1f", media);

return 0;
}
