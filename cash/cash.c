#include <stdio.h>
#include <math.h>

int main(void)
{
    float valortroco;

    do
    {
        printf("Troca devida: ");
        scanf("%f", &valortroco);
    } while (valortroco < 0);

    int centavos = round(valortroco * 100 );

    int moeda25 = centavos / 25;
    centavos %= 25;
    
    int moeda10 = centavos / 10;
    centavos %= 10;

    int moeda5 = centavos / 5;
    centavos %= 5;

    int moeda1 = centavos;

    int totalcoins = moeda25 + moeda10 + moeda5 + moeda1;

    printf("Número de Moedas: %i\n", totalcoins);
}