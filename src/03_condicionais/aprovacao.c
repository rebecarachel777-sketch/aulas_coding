#include <stdio.h>

int main(void) {
    float media;
    float frequencia;

    printf("Digite a media: ");
    scanf("%f", &media);
    printf("Digite a frequencia: ");
    scanf("%f", &frequencia);

    if (media >= 7.0f && frequencia >= 75.0f) {
        printf("Aprovado\n");
    } else {
        printf("Reprovado\n");
    }

    return 0;
}
