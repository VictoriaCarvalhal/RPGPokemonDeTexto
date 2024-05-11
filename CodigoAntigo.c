#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct golpe
{
    char nome[10], tipo[7], descricao[30];
    int dano, van, desvan;
} golpe;

typedef struct pokemon
{
    char nome[10], tipo[7], van[7], desvan[7];
    int vida, atc, def, nivel;
    float exp;
    golpe *seusGolpes;
} pokemon;

typedef struct treinador
{
    char nome[10];
    pokemon *pokebolas;
} treinador;

void Menu_inicial(int *res, int *bandeira);
void Novo_jogo(treinador *jogador);
void InicializarPokemon(pokemon *pokemon, int num);
void Rodar_dialogo(char *dialogo);
void TestarResposta(int *res, int *bandeira);
void PrintarValorInt(int valor, char *NomeVar);
void Eventos(int bandeira);

int main()
{
    int res, bandeira, numpoq;
    res = bandeira = 0;
    treinador jogador, rival;
    //jogador.pokebolas = malloc(sizeof(pokemon)); // Allocate memory for pokebolas
    //InicializarPokemon(jogador.pokebolas, numpoq);
    Menu_inicial(&res, &bandeira);
    TestarResposta(&res, &bandeira);
    //free(jogador.pokebolas); // Free allocated memory
    return 0;
}

void Menu_inicial(int *res, int *bandeira)
{
    printf("------------------------------------------------------------------------------------------------------------------");
    printf("\nJogo de Pokemon\n");
    printf("------------------------------------------------------------------------------------------------------------------");
    printf("\n[1] - Iniciar Novo Jogo\n");
    printf("\n[2] - Carregar Jogo\n");
    printf("\n[3] - Sair do Jogo\n");
    printf("------------------------------------------------------------------------------------------------------------------");
    printf("\nEscreva sua resposta:\n");
    scanf("%d", res);              // No need to pass address, res is already a pointer
    TestarResposta(res, bandeira); // No need to pass address, res and bandeira are already pointers
}

void Novo_jogo(treinador *jogador)
{
    printf("Seu nome é:");
    scanf("%s", jogador->nome);
    printf("Prazer %s!", jogador->nome);
}

void InicializarPokemon(pokemon *pokemon, int num)
{
    if (num == 1)
    {
        strcpy(pokemon->nome, "Chamander");
        pokemon->nivel = 0;
        pokemon->exp = 0;
    }
}

void Rodar_dialogo(char *dialogo)
{
    int rodar;
    printf("%s\n", dialogo); // No need to dereference dialogo
    printf("Clique qualquer tecla para passar para o próximo diálogo\n");
    scanf("%d", &rodar); // Assuming you want to read an integer
}

void TestarResposta(int *res, int *bandeira)
{
    if (*bandeira == 0)
    { // Dereference banderia and res
        if (*res == 1)
        {
            *bandeira = 1;
            PrintarValorInt(*bandeira, "bandeira"); // Dereference banderia
        }
    }
    else
    {
        if (*bandeira == 1)
        { // Dereference banderia and res
            if (*res == 1)
            {
                printf("Inicio do jogo\n");
            }
            else if (*res == 2)
            { // Corrected the condition
                printf("Parte do código ainda não escrita\n");
            }
            else
            {
                printf("Parte do código ainda não escrita\n");
            }
        }
        else
        {
            printf("Essa parte do código ainda não foi escrita\n");
        }
    }
}

void PrintarValorInt(int valor, char *NomeVar)
{ // Corrected the second argument type
    printf("\nA %s vale: %d\n", NomeVar, valor);
}