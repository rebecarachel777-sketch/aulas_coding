#include <stdio.h>

int main(void) {
    int a, b, c, nota, recuperacao;

    printf("Digite a primeira nota: ");
    scanf("%d", &a);
    printf("Digite a segunda nota: ");
    scanf("%d", &b);
    printf("Digite a terceira nota: ");
    scanf("%d", &c);

    nota = (a + b + c) / 3;
    printf("A media das notas e: %d", nota);

    if (nota >= 7) {
        printf("\nAprovado");
    } else {
        if (nota >= 5) {
            printf("\nRecuperacao");
            printf("Digite a nota da recuperacao: ");
            scanf("%d", &recuperacao);

            if (recuperacao >= 5) {
                printf("\nAprovado");
            } else {
                printf("\nReprovado");
            }
        } else {
            printf("\nReprovado");
        }
    }

    return 0;
}
