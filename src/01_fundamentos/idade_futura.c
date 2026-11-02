#include <stdio.h>

int main(void) {
    int idade;
    int idadeFutura;

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    idadeFutura = idade + 1;

    printf("No proximo ano voce tera %d anos.\n", idadeFutura);

    return 0;
}
