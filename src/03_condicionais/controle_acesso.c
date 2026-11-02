#include <stdio.h>
#include <stdbool.h>

int main(void) {
    int idade;
    int senha;
    int bloqueadoInt;
    bool bloqueado;

    printf("Idade: ");
    scanf("%d", &idade);
    printf("Senha numerica: ");
    scanf("%d", &senha);
    printf("Bloqueado? (1=sim, 0=nao): ");
    scanf("%d", &bloqueadoInt);

    bloqueado = bloqueadoInt != 0;

    if (idade >= 18) {
        printf("Acesso permitido\n");
    } else {
        printf("Acesso negado devido a idade\n");
    }

    if (senha == 1234) {
        printf("Senha correta\n");
    } else {
        printf("Senha incorreta\n");
    }

    if (bloqueado) {
        printf("Acesso negado devido ao bloqueio\n");
    } else {
        printf("Acesso permitido\n");
    }

    return 0;
}
