#include <stdio.h>

int main(void)
{
    char nome[100];
    printf("Olá, Mundo\n");
    printf("Digite Seu Nome: ");
    fgets(nome, sizeof(nome), stdin);

    printf("Olá, %s", nome);
    printf("Pressione Uma Tecla Para Continuar");
    getchar();
}
