#include <stdio.h>

int main(){
    int numero1, numero2;

    printf("Digite um numero:");
    scanf("%d", &numero1);

    printf("Digite o segundo numero:");
    scanf("%d", &numero2);

    if(numero1 > numero2) {
        printf("Maior: %d\n", numero1);
        printf("Menor: %d\n", numero2);

    }else if(numero2 > numero1) {
        printf("Maior: %d\n", numero2);
        printf("Menor: %d\n", numero1);
    
    }else {
        printf("Os numeros sao iguais\n");
    }
    float media = (numero1 + numero2) /2;
    printf("A media entre os numeros e: %f\n", media);    
  
return 0;
}