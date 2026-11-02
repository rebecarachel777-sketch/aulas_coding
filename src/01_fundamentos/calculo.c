#include <stdio.h>

int main(void) {
    int valor = 2;
    int valor2 = 3;
    int valor3 = 4;
    int resultado;

    resultado = (valor + valor2) * valor3;
    printf("Resultado: %d\n", resultado);

    resultado = valor + valor2 * valor3;
    printf("Resultado: %d\n", resultado);

    return 0;
}
