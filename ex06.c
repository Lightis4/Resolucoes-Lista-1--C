#include <stdio.h>

int main(void) {

    int numero1, numero2, soma;

    printf("Digite o primeiro numero: ");
    scanf("%d", &numero1);

    printf("Digite o segundo numero: ");
    scanf("%d", &numero2);

    soma = numero1 + numero2;

    printf("%d + %d = %d\n", numero1, numero2, soma);

    return 0;
}