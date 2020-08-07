#include <stdio.h>

int main()
{
    int distancia;
    int circunferencia = 8;
    int distEmissorRoda = 3;
    scanf("%d", &distancia);
    if (distancia < 6 || distancia > 800008)
    {
        printf("Erro na entrada dos dados. Distância \n");
        return 0;
    }

    int numVoltas = (distancia - distEmissorRoda) / circunferencia;
    // printf("Número de voltas = %d ", numVoltas);
    int resultado = distancia - distEmissorRoda - numVoltas * circunferencia;
    if (resultado == 3)
    {
        printf("Sáida 1 \n");
    }
    else if (resultado == 4)
    {
        printf("Sáida 2 \n");
    }
    else if (resultado == 5)
    {
        printf("Sáida 3 \n");
    }
    else
    {
        printf("Saída indefinida. \n");
    }
    return 0;
}

//Para as entradas de 9, 10, 11, 12 e 13 não teremos saídas definidas e todas as somas desses números com 8. 