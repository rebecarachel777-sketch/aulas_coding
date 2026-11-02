#include <stdio.h>

int main(void) {
    float nota;

    printf("Digite a nota: ");
    scanf("%f", &nota);

    if (nota >= 9.0f) {
        printf("Excelente\n");
    } else if (nota >= 7.0f) {
        printf("Bom\n");
    } else if (nota >= 5.0f) {
        printf("Regular\n");
    } else {
        printf("Insuficiente\n");
    }

    return 0;
}
