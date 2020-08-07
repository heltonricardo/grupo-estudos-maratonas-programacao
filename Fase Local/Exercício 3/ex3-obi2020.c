#include <stdio.h>
#include <stdlib.h>

// Dados de entrada.
int totalAmigos = 5;
int totalReunioes = 6;
int infectado = 3;
int numPrimReuniaoInfectado = 4;

void imprimeSituacaoDosAmigos(int amigos[totalAmigos])
{
    for (int i = 0; i < totalAmigos; i++)
    {
        printf("[Amigo %d] = ", i + 1);
        if (amigos[i] == 0)
        {
            printf("Não infectado \n");
        }
        else if (amigos[i] == 1)
        {
            printf("Infectado \n");
        }
    }
    printf("\n");
}

int main()
{
    int infectadoEstanaReuniao;

    //########## Entrada de dados #######
    // Total de Amigos e Total de Reuniões
    scanf("%d %d", &totalAmigos, &totalReunioes);

    // Abaixo foi declarado um vetor que representa o número de amigos do grupo.
    // O índice do vetor representa o amigo.
    // O conteúdo do vetor será 0 para amigo não infectado e 1 para amigo infectado.
    int amigos[totalAmigos];

    // O trecho de código abaixo inicia o vetor de amigos com 0 em todas as posições pois inicialmente todos os amigos não estão infectados exceto o amigo que se infectou fora do grupo. Esse amigo será setado logo abaixo
    for (int i = 0; i < totalAmigos; i++)
    {
        amigos[i] = 0;
    }
    int reunioes[totalReunioes][totalAmigos];

    for (int k = 0; k < totalReunioes; k++)
    {
        for (int i = 0; i < totalAmigos; i++)
        {
            reunioes[k][i] = 0;
        }
    }

    //Amigo infectado e número da primeira reunião que ele participa
    scanf("%d %d", &infectado, &numPrimReuniaoInfectado);
    for (int m = 0; m < totalReunioes; m++)
    {
        // Lê o número de participantes da reunião
        scanf("%d", &reunioes[m][0]);
        for (int n = 1; n <= reunioes[m][0]; n++)
        {
            scanf("%d", &reunioes[m][n]);
        }
    }
    printf("Matriz \n");
    for (int i = 0; i < totalReunioes; i++)
    {
        for (int p = 0; p < totalAmigos; p++)
        {
            printf("%d ", reunioes[i][p]);
        }
        printf("\n");
    }
    printf("\n");

    //########## Fim da Entrada de dados #######

    // Incluir no vetor o amigo que foi infectado fora do grupo.
    amigos[infectado - 1] = 1;

    //Matriz das reuniões com os amigos. A posição estã preenchida com o número do amigo que estava na reunião. Se a posição for igual a zero significa sem amigo.

    //Exemplo 01
    // int reunioes[3][4] = {
    //     {2, 1, 2, 0},
    //     {3, 3, 1, 2},
    //     {2, 2, 1, 0}};

    // Exemplo 2
    // reunioes[6][5] = {
    //     {2, 1, 3, 0, 0},
    //     {4, 1, 2, 3, 5},
    //     {2, 1, 3, 0, 0},
    //     {2, 1, 3, 0, 0},
    //     {2, 4, 5, 0, 0},
    //     {2, 2, 4, 0, 0}};

    //Exemplo 3
    // int reunioes[totalReunioes][totalAmigos] = {
    //     {6,7,5,1,9,6,2},
    //     {3,9,4,6,0,0,0},
    //     {3,2,9,5,0,0,0},
    //     {3,8,5,7,0,0,0},
    //     {2,8,9,0,0,0,0}};

    printf("Relação de amigos \n");

    // A função imprimeSituacaoDosAmigos imprime na tela a situação de cada amigo.
    imprimeSituacaoDosAmigos(amigos);
    printf("Infectado: amigo %d", infectado);
    amigos[infectado - 1] = 1;

    // O trecho de código abaixo percorre a matriz de entrada a partir da primeira reunião que o amigo infectado participa, pois é só a partir dela que os outros começam a se infectar.
    for (int i = numPrimReuniaoInfectado - 1; i < totalReunioes; i++)
    {
        printf("\nVerificando %dª Reunião - ", i + 1);
        printf("Presentes na reunião: ");
        for (int b = 1; b < totalAmigos; b++)
        {
            if (reunioes[i][b] != 0)
            {
                printf("[Amigo %d]", reunioes[i][b]);
            }
        }
        printf("\n");
        printf("Início da busca do infectado: ");
        int numAmigosnaReuniao = reunioes[i][0];
        for (int aux = 1; aux <= numAmigosnaReuniao; aux++)
        {
            // printf(" %d ", reunioes[i][aux]);
            infectadoEstanaReuniao = 0;
            if (amigos[reunioes[i][aux] - 1] == 1)
            {
                printf("Infectado encontrado.");
                infectadoEstanaReuniao = 1;
            }
            if (infectadoEstanaReuniao == 1)
            {
                for (int j = 1; j <= numAmigosnaReuniao; j++)
                {
                    amigos[reunioes[i][j] - 1] = 1;
                }
            }
        }
        printf("Fim da busca do infectado \n");
        // if(infectadoEstanaReuniao == 1){
        //     amigos[reunioes[i][j] + 1] = 1;
        // }

        imprimeSituacaoDosAmigos(amigos);
    }
    printf("Amigos infectados no final \n");
    imprimeSituacaoDosAmigos(amigos);
    int totalDeAmigosInfectados = 0;
    for (int i = 0; i < totalAmigos; i++)
    {
        if (amigos[i] == 1)
        {
            totalDeAmigosInfectados = totalDeAmigosInfectados + 1;
        }
    }

    printf("%d\n", totalDeAmigosInfectados);

    return 0;
}