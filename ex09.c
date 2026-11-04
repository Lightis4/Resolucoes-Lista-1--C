#include <stdio.h>

int main(void) {

    float salario, bonus, salarioTotal;

    printf("Digite seu salario: ");
    scanf("%f", &salario);

    printf("Digite o valor do bonus: ");
    scanf("%f", &bonus);

    salarioTotal = salario + bonus;

    printf("Salario total: R$ %.2f\n", salarioTotal);

    return 0;
}