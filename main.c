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
} pokemon;
typedef struct treinador
{
    char nome[10];
    pokemon *pokebolas;
}treinador;

int menu_inicial();
void novo_jogo(),roteiro(),inicializarPokemons(); 

int main(){
    int res,bandeira;
    treinador jogador,rival;
    bandeira = 0;
    res = menu_inicial();
    switch (res){
        case 1:
            bandeira = 1;
            break;
        case 2:
            printf("Codigo ainda não escrito");
            break;
    }
    switch (bandeira)
    {
    case 1:
        printf("Você acordou na sua cama. Sua mãe está te chamando irritada. Ela fala alguma coisa de você estar\n
        atrasado para algum evento importante. Não dá para ouvir direito por que ela está no andar de baixo.\n
        O que você deseja fazer?\n");
        printf("[1] - Descer\n[2] - Explorar o quarto");
        scanf("%d",&res);
        switch(res){
            case 1:
                printf("Você desce as escadas e se depara com sua mãe\n");
                printf("Mãe:Seu dorminhoco! Você está atrasado para a reunião com o professor pokemon. Seu amigo\n
                já está indo para lá! O... Eu esqueci o nome dele. Qual o nome dele mesmo?\n");
                printf("O nome do seu rival:");
                scanf("%s",&(rival.nome));
                printf("Mãe:O seu amigo %s já está lá!Você vai acabar perdendo a oportunidade de conseguir um\n
                pokemon!Vá logo!E peça desculpas ao professor pelo seu atraso. Mande beijos para a mãe do seu\n
                amigo!\n");
                printf("O que deseja fazer?\n");
                printf("[1] - Sair de Casa\n[2]-Explorar a Sala de Jantar\n");
                scanf("%d",&res);
                switch (res)
                {
                case 1:
                    printf("Você sai de casa e você sente o sol forte na sua pele e a brisa quente de verão.\n
                    Casas se espalham a sua volta e um caminho de pedra segue a sua frente com o jardim\n
                    arrumado da sua mãe a sua volta.\n Alguns pokemons instetos voam por ai polinizando as flores\n
                    Você ainda se lembra do caminho para o laboratorio do professor.\n");
                    printf("O que você deseja fazer?\n");
                    printf("[1] - Ir para o laboratório\n[2] - Explorar Vila\n");
                    switch(res){
                        case 1:
                            printf("Você chega no laboratório. O professor e seu amigo %s estão te esperando.\n Na mesa
                            há três pokebolas. O professor diz que você pode escolher entre qualquer uma das três.\n
                            A primeira há o pokemon Chamander(Tipo Fogo),a segunda o Squirtle(Tipo Agua)\n e a terceira 
                            o Bulbasauro (Tipo Planta)\n");
                            printf("O que você deseja fazer?\n");
                            printf("[1] - Escolher seu inicial\n[2] - Preciso de mais tempo");
                            scanf("%d",&res);
                            switch (res)
                            {
                                case 1:
                                    printf("Escolha seu inicial!");
                                    printf("[1]-Chamander\n[2]-Squirtle\n[3]-Bulbasauro\n");
                                    scanf("%d",&res);
                                    switch (res)
                                    {
                                    case 1:
                                        
                                        break;
                                    
                                    default:
                                        break;
                                    }
                                    break;
                                case 2:
                                    break;
                                default:
                                    break;
                            }
                            break;
                        case 2:
                            break;
                        default:
                            break;
                    }
                    break;
                case 2:
                    break;
                default:
                    printf("Essa opção não existe\n");
                    break;
                }
                break;
            case 2:
                break;
            default:
                printf("Essa opção não existe\n");
                break;
        }
        break;
    default:
        break;
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

void inicializarPokemons(){

}