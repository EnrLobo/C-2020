//2- Ler 10 n�meros e imprimir quantos s�o pares e quantos s�o
//�mpares. (1 ponto)

#include<stdio.h>
#include<stdlib.h> 

main()
 { 
 int par=0, numero, x; 
  
 for (x=1; x<=10; x++) 
    {
      printf("Informe numero: "); 
      scanf("%d", &numero); 
      if (numero%2==0)
        { 
          par=par+1; 
         }
    }

printf("\n Quantidade de numeros Pares: %d\n", par); 
printf("Quantidade de numeros Impares: %d", 10-par); 
printf("\n");

return 0;
}
