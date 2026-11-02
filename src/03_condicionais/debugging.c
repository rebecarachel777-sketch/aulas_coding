#include <stdio.h>

int main(void) {
    int opcao;
    printf("Digite uma opcao: ");
    scanf("%d", &opcao);

    if (opcao == 1) {
        printf("Opcao 1\n");
    }

    int idade;
    printf("Digite sua idade: ");
    scanf("%d", &idade);

    if (idade >= 18) {
        printf("Voce e maior de idade.\n");
    }

    if (idade > 18 && idade < 65) {
        printf("Fora da faixa etaria.\n");
    }

    if (18 <= idade && idade <= 65) {
        printf("Faixa permitida\n");
    }

    return 0;
}
