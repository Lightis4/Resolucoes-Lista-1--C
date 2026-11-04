#include <stdio.h>

int main(void) {

    int nascimento;
    int idade;

    printf("Digite seu ano de nascimento: ");
    scanf("%d", &nascimento);

    idade = 2026 - nascimento;

    printf("Sua idade aproximada e: %d anos\n", idade);

    return 0;
}