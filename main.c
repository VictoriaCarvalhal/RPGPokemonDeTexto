#include <stdio.h>

typedef struct golpe
{
    char nome[10], tipo[7], descricao[30];
    int dano, van, desvan;
}golpe;
typedef struct pokemon
{
    char nome[10], tipo[7], van[7], desvan[7];
    int vida, atc, def, nivel;
    float exp;
    golpe seusGolpes[4];
} pokemon;
typedef struct treinador
{
    char nome[10];
    pokemon pokebolas[6];
}treinador;

int menu_inicial();
void novo_jogo(),roteiro(),checarBatalha(),checarEvento();

int main(){
    int res,bandeira,batalha,evento;
    treinador jogador;
    bandeira = 0;
    res = menu_inicial();
    switch (res)
    {
        case 1:
            printf("------------------------------------------------------------------------------------------------------------------");
            printf("\nComeçando uma nova jornada!\n");
            printf("------------------------------------------------------------------------------------------------------------------");
            novo_jogo(&jogador);
            bandeira = 1;
            break;
        default:
            printf("\nEssa opção de jogo não foi programada\n");
    }
    while(bandeira != 0){ 
        roteiro(&bandeira);
        checarEvento(evento);
        checarBatalha(batalha);
    }
    return 0;
}

int menu_inicial(){
    int res;
    printf("------------------------------------------------------------------------------------------------------------------");
    printf("\nJogo de Pokemon\n");
    printf("------------------------------------------------------------------------------------------------------------------");
    printf("\n[1] - Iniciar Novo Jogo\n");
    printf("[2] - Carregar Jogo\n");
    printf("[3] - Sair do Jogo\n");
    printf("Escreva sua resposta:\n");
    scanf("%d",&res);
    return res;
}

void novo_jogo(treinador *jogador){
    printf("Seu nome é:");
    scanf("%s",&(jogador->nome));
    printf("Prazer %s!",jogador->nome);
}

void roteiro(int *bandeira){

}

void checarEvento(int evento){

}

void checarBatalha(int batalha){

}