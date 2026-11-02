#include <stdio.h>

int main(void) {
    int a;
    int b;
    float nota1;
    float nota2;
    float nota3;
    double divisao;
    double resto;
    double media;

    printf("Digite o primeiro numero: ");
    scanf("%d", &a);
    printf("Digite o segundo numero: ");
    scanf("%d", &b);
    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);
    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);
    printf("Digite a terceira nota: ");
    scanf("%f", &nota3);

    divisao = (double)a / b;
    resto = a % b;
    media = (nota1 + nota2 + nota3) / 3.0f;

    printf("Divisao: %.2f\n", divisao);
    printf("Resto: %.2f\n", resto);
    printf("Media: %.2f\n", media);

    return 0;
}
