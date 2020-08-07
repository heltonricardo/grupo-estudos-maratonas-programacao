// Não está resolvido ainda.

#include <stdio.h>
#include <stdlib.h>

int N;
int forcaErupcao;

void preencheMatriz(char matriz[][N])
{
    int num;
    // matriz = {
    //     {2, 7, 7, 5, 5, 4, 7, 8},
    //     {2, 9, 9, 8, 5, 4, 3, 9},
    //     {3, 4, 8, 9, 9, 9, 8, 9},
    //     {2, 2, 1, 1, 5, 5, 6, 9},
    //     {6, 6, 7, 3, 6, 6, 8, 9},
    //     {9, 9, 8, 8, 6, 5, 5, 5},
    //     {4, 4, 4, 3, 3, 3, 9, 9},
    //     {9, 9, 9, 8, 6, 9, 9, 1}};

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            num = rand() % 10;
            matriz[i][j] = num + 48;
        }
    }
}

void imprimeMatriz(char matriz[][N])
{
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            printf("%c ", matriz[i][j]);
        }
        printf("\n");
    }
}

int verificaVizinhos(char matriz[][N], int i, int j)
{
    if (i - 1 >= 0)
    {
        if (matriz[i - 1][j] == '*')
        {
            printf("Vizinho de cima tá invadido");
            return 1;
        }
    }
    if (j - 1 >= 0)
    {
        if (matriz[i][j - 1] == '*')
        {
            printf("Vizinho do lado esquerdo tá invadido");
            return 1;
        }
    }
    if (i + 1 < N)
    {
        int elevacao = matriz[i + 1][j] - 48;
        if (forcaErupcao >= elevacao)
        {
            matriz[i + 1][j] = '*';
            printf("Vizinho de baixo tá invadido");
            return 1;
        }
    }
    if (j + 1 < N)
    {
        int elevacao = matriz[i][j + 1] - 48;
        if (forcaErupcao >= elevacao)
        {
            matriz[i][j + 1] = '*';
            printf("Vizinho do lao direito tá invadido");
            return 1;
        }
    }
    return 0;
}

int verificaPosicao(char matriz[][N], int i, int j) //retorna 0 se não estiver e 1 se estiver.
{
    printf("[verificaPosicao] %c Posicao %d %d\n", matriz[i][j], i, j);
    if (matriz[i][j] == '*')
    {
        printf("Posição invadida\n");
        return 1;
    }
    else
    {
        return 0;
    }
}

void verificaMatriz(char matriz[][N])
{
    int i = 0, j = 0;
    int elemento = matriz[i][j] - 48;
    if (i == 0 && j == 0 && forcaErupcao >= elemento)
    {
        matriz[i][j] = '*';
    }
    for (i = 0; i < N; i++)
    {
        for (j = 0; j < N; j++)
        {
            if (i == 0 && j == 0)
            {
                continue;
            }
            int vizinhoDireito = 0, vizinhoEsquerdo = 0, vizinhoBaixo = 0, vizinhoCima = 0;
            elemento = matriz[i][j] - 48;
            printf("Elemento sendo verificado %d\n", elemento);
            if (j + 1 < N)
            {
                vizinhoDireito = verificaPosicao(matriz, i, j + 1);
            }
            if (j - 1 >= 0)
            {
                vizinhoEsquerdo = verificaPosicao(matriz, i, j - 1);
            }
            if (i - 1 >= 0)
            {
                vizinhoCima = verificaPosicao(matriz, i - 1, j);
            }
            if (i + 1 < N)
            {
                vizinhoBaixo = verificaPosicao(matriz, i + 1, j);
            }
            printf("Vizinho direito = %d\n", vizinhoDireito);
            printf("Vizinho esquerdo = %d\n", vizinhoEsquerdo);
            printf("Vizinho cima = %d\n", vizinhoCima);
            printf("Vizinho baixo = %d\n", vizinhoBaixo);
            if ((vizinhoCima || vizinhoDireito || vizinhoBaixo || vizinhoEsquerdo) && (forcaErupcao >= elemento))
            {
                matriz[i][j] = '*';
            }
            imprimeMatriz(matriz);
            printf("\n");
        }
    }
}

int main()
{
    N = 5;
    // char matriz[8][8] = {
    //     '2','7','7','5','5','4','7','8',
    //     '2','9','9','8','5','4','3','9',
    //     '3','4','8','9','9','9','8','9',
    //     '2','2','1','1','5','5','6','9',
    //     '6','6','7','3','6','6','8','9',
    //     '9','9','8','8','6','5','5','5',
    //     '4','4','4','3','3','3','9','9',
    //     '9','9','9','8','6','9','9','1'
    // };
    char matriz[5][5] = {
        {'2', '5', '6', '7', '9'},
        {'3', '5', '2', '3', '4'},
        {'1', '7', '1', '8', '2'},
        {'3', '9', '9', '9', '3'},
        {'1', '1', '2', '3', '3'}};
    forcaErupcao = 4;
    int elevacao;
    int statusVizinhos = 0;
    // preencheMatriz(matriz);
    printf("Matriz Original \n");
    imprimeMatriz(matriz);
    printf("Força da erupção: %d\n", forcaErupcao);

    for (int w = 0; w < 25; w++)
    {
        verificaMatriz(matriz);
    }

    printf("Nova matriz \n");
    imprimeMatriz(matriz);

    // scanf("%d", &distancia);
    // int numVoltas = (distancia - distEmissorRoda)/circunferencia;
    // // printf("Número de voltas = %d ", numVoltas);

    // int resultado = distancia - distEmissorRoda - numVoltas*circunferencia;

    // if(resultado == 3 ){ printf("Sáida 1 \n");}
    // if(resultado == 4 ){ printf("Sáida 2 \n");}
    // if(resultado == 5 ){ printf("Sáida 3 \n");}

    return 0;
}