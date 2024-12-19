#include <stdio.h>

int main(void)
{
    long long numero;
    int valor1, valor2, valor3, valor4, valor5, valor6, valor7, valor8,
    valor9, valor10, valor11, valor12, valor13, valor14, valor15, valor16;
    int unidade2, unidade4, unidade6, unidade8, unidade10, unidade12, unidade14, unidade16;

    do
    {
        printf("Card Number: ");
        scanf("%lld", &numero);
    } while (numero < 1);

    valor1 = numero % 10;
    valor3 = (numero / 100) % 10;
    valor5 = (numero / 10000) % 10;
    valor7 = (numero / 1000000) % 10;
    valor9 = (numero / 100000000) % 10;
    valor11 = (numero / 10000000000) % 10;
    valor13 = (numero / 1000000000000) % 10;
    valor15 = (numero / 100000000000000) % 10;
    
    int primeirasoma = valor1 + valor3 + valor5 + valor7 + valor9 + valor11 + valor13 + valor15;
    
    valor2 = ((numero / 10) % 10) * 2;
    valor4 = ((numero / 1000) % 10) * 2;
    valor6 = ((numero / 100000) % 10) * 2;
    valor8 = ((numero / 10000000) % 10) * 2;
    valor10 = ((numero / 1000000000) % 10) * 2;
    valor12 = ((numero / 100000000000) % 10) * 2;
    valor14 = ((numero / 10000000000000) % 10) * 2;
    valor16 = ((numero / 1000000000000000) % 10) * 2;

    unidade2 = ((valor2 / 10) % 10) + (valor2 % 10);
    unidade4 = ((valor4 / 10) % 10) + (valor4 % 10);
    unidade6 = ((valor6 / 10) % 10) + (valor6 % 10);
    unidade8 = ((valor8 / 10) % 10) + (valor8 % 10);
    unidade10 = ((valor10 / 10) % 10) + (valor10 % 10);
    unidade12 = ((valor12 / 10) % 10) + (valor12 % 10);
    unidade14 = ((valor14 / 10) % 10) + (valor14 % 10);
    unidade16 = ((valor16 / 10) % 10) + (valor16 % 10);

    int segundasoma = unidade2 + unidade4 + unidade6 + unidade8 + unidade10 + unidade12 + unidade14 + unidade16;

    int somatotal = primeirasoma + segundasoma;

    if(somatotal % 10 != 0)
    {
        printf("Invalid\n");
        getchar();
        printf("Press a key to continue...");
        getchar();
        return 0;
    }

    int contador = 0;
    while(numero != 0)
    {
        numero /= 10;
        contador++;
    }

    valor14 /= 2;
    valor16 /= 2;

    if(contador == 16 && (valor15 + valor16) >= 6 && (valor15 + valor16) <= 10)
    {
        printf("MASTERCARD\n");
    }
    else if(contador == 15 && (valor15 + valor14) >= 7 && (valor15 + valor14) <= 10)
    {
        printf("AMERICAN EXPRESS\n");
    }
    else if(contador == 13 || contador == 16 && valor16 == 4)
    {
        printf("VISA\n");
    }
    getchar();
    printf("Press a key to continue...");
    getchar();
}