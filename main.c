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
    golpe *seusGolpes;
}pokemon;
typedef struct treinador
{
    char nome[10];
    pokemon *pokebolas;
}treinador;

int menu_inicial();
void novo_jogo(),roteiro(),InicializarPokemon();

int main(){
    int res,bandeira,numpoq;
    treinador jogador,rival;
    InicializarPokemon(jogador.*pokemons,numpoq);
    
    //res = menu_inicial();
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

void InicializarPokemon(pokemon pokemon,int num){
    if(num == 1){
        pokemon->nome = "Chamander";
        pokemon->nivel = 0;
        pokemon->exp = 0;
        
    }
}