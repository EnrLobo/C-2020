#include<stdio.h>
#include<stdlib.h>

int main()
{
int numero,cont,result;
 
 printf("\n Informe o numero: \n");
 scanf("%d",&numero);

if(numero>=1 && numero<=10)  
  {
     for(cont=1;cont<=10;cont++)
        {
          result=(numero*cont);
          printf("\t %d * %d =%d\n ",numero,cont,result);
        }
   }else

printf("\n o numero nao esta entre 1 e 10");

return 0;
}
