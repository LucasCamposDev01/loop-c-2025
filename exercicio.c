#include <stdio.h>

    int main () {
        int numero;

        do {
        printf("Digite um numero inteiro:");
        scanf("%d", &numero);

        printf("Numero digitado: %d\n", numero);
        
        if(numero % 2 == 0) {
            printf("Numero Par\n");
        }else {
            printf("Numero Impar\n");
        }
        }while (numero > 0);
        
           return 0;
     }