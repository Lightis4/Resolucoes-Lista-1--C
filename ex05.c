#include <stdio.h>

int main(void){

    char inicial;
    int  idade;
    float nota;

    printf("Digite a inicial do seu nome: ");
    scanf("%c", &inicial);

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    printf("Digite sua nota em python: ");
    scanf("%f", &nota);

    printf("Sua Inicial e %c\n"
            "Sua idade e %d\n"
            "Sua nota e %.1f", inicial,idade,nota);

    return 0;

}