#include <stdio.h>

int main(void) {
    int horas;
    int tipoCliente;
    float valorBase;
    float desconto;
    float valorFinal;

    printf("Digite 1 para cliente comum ou 2 para cliente VIP: ");
    scanf("%d", &tipoCliente);
    printf("Digite a quantidade de horas: ");
    scanf("%d", &horas);

    if (horas <= 1) {
        valorBase = 5.0f;
    } else if (horas <= 3) {
        valorBase = 10.0f;
    } else {
        valorBase = 15.0f;
    }

    if (tipoCliente == 2) {
        desconto = valorBase * 0.20f;
    } else {
        desconto = 0.0f;
    }

    valorFinal = valorBase - desconto;

    printf("Valor base: R$ %.2f\n", valorBase);
    printf("Desconto: R$ %.2f\n", desconto);
    printf("Valor final: R$ %.2f\n", valorFinal);

    return 0;
}
