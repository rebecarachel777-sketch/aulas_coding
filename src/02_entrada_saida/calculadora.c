#include <stdio.h>

int main(void) {
    int a;
    int b;
    int soma;
    int subtracao;
    int multiplicacao;
    double divisao;

    printf("Digite o primeiro numero: ");
    scanf("%d", &a);
    printf("Digite o segundo numero: ");
    scanf("%d", &b);

    soma = a + b;
    subtracao = a - b;
    multiplicacao = a * b;
    divisao = (double)a / b;

    printf("Soma: %d\n", soma);
    printf("Subtracao: %d\n", subtracao);
    printf("Multiplicacao: %d\n", multiplicacao);
    printf("Divisao: %.2f\n", divisao);

    return 0;
}
