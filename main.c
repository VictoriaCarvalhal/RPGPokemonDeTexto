#include <stdio.h>
#include <string.h>

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

void Menu_inicial(int *res,int *bandeira);
void Novo_jogo(treinador *jogador);
void InicializarPokemon(pokemon *pokemon, int num);
void Rodar_dialogo(char *dialogo);
void TestarResposta(int *res, int *bandeira);
void PrintarValorInt(int valor,char NomeVar);

int main()
{
    int res, bandeira, numpoq;
    res = bandeira = 0;
    treinador jogador, rival;
    InicializarPokemon(jogador.pokebolas, numpoq);
    menu_inicial(&res,&bandeira);
    TestarResposta(&res,&bandeira);
}

void Menu_inicial(int *res,int *bandeira)
{
    printf("------------------------------------------------------------------------------------------------------------------");
    printf("\nJogo de Pokemon\n");
    printf("------------------------------------------------------------------------------------------------------------------");
    printf("\n[1] - Iniciar Novo Jogo\n");
    printf("\n[2] - Carregar Jogo\n");
    printf("\n[3] - Sair do Jogo\n");
    printf("------------------------------------------------------------------------------------------------------------------");
    printf("\nEscreva sua resposta:\n");
    scanf("%d", &res);
    TestarResposta(&res,&bandeira);
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
        strcpy(pokemon->nome,"Chamander");
        pokemon->nivel = 0;
        pokemon->exp = 0;
    }
}

void Rodar_dialogo(char *dialogo){
    int rodar;
    printf("%s\n",*dialogo);
    printf("Clique qualquer tecla para passar para o proximo dialogo\n");
    scanf("",&rodar);
}

void TestarResposta(int *res, int *bandeira){
    if(bandeira == 0){
        if (res == 1)
        {
            bandeira = 1;
            PrintarValorInt(bandeira,"bandeira");
        }
    }
    else{
        if (bandeira == 1)
        {
            if (res == 1)
            {
                printf("Inicio do jogo\n");
            }
            else
            {
                if (res == 2)
                {
                    printf("Parte do codigo ainda não escrita");
                }
                else
                {
                    printf("Parte do codigo ainda não escita");
                }
            }
        }
        else
        {
            printf("Essa parte do codigo ainda não foi escrita\n");
        }
    }
    
}

void PrintarValorInt(int valor, char NomeVar){
    printf("\nA %s vale: %d\n",NomeVar,valor);
}