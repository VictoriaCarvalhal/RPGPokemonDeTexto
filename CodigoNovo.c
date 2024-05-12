#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 100

typedef struct golpe
{
    char NomeGolpe[MAX], TipoGolpe[MAX];
    int CodGolpe, Bonusataq, Bonusdef;
} golpe;

typedef struct pokemon
{
    char NomePokemon[MAX], TipoPokemon[MAX];
    int CodPokemon, Niv, Ataq, Def, Vida, Exp, numGolpes;
    golpe *SeuGolpe;
} pokemon;

void InicializarPokemon(int cod, pokemon **pokemons, int *Ini, int *numPokemons);
void InicializarGolpe(int n, golpe **golpes, int *Ini, int *numGolpes);

int main()
{
    int res, Ini, numPokemons;
    Ini = numPokemons = 0;
    pokemon *pokemons = NULL;



   /*printf("Escolha um inicial:\n[1]-Charmander [2]-Squirtle [3]-Bulbasaur\n");
   scanf("%d", &res);

    while ((res < 1) || (res > 3))
    {
        printf("Resposta não existe\n");
        printf("Escolha um inicial:\n[1]-Charmander [2]-Squirtle [3]-Bulbasaur\n");
        scanf("%d", &res);
    }

    printf("Sua resposta é: %d\n", res);
    if (res == 1)
    {
        printf("Você escolheu o Charmander!\n");
        InicializarPokemon(res, &pokemons, &Ini, &numPokemons);
    }*/

    printf("Escolha um inicial:\n[1]-Pikachu.\n ");
    scanf("%d", &res);

    InicializarPokemon(res, &pokemons, &Ini, &numPokemons);

    for (int i = 0; i < numPokemons; i++)
    {
        free(pokemons[i].SeuGolpe);
    }
    
    free(pokemons);
    return 0;
}

void InicializarPokemon(int cod, pokemon **pokemons, int *Ini, int *numPokemons)
{
    int i;
    i = 0;
    if (*Ini == 0)
    {
        *pokemons = (pokemon *)malloc(1 * sizeof(pokemon));
        if (*pokemons == NULL)
        {
            printf("Memory allocation failed!\n");
            return;
        }
        *Ini = 1;
    }

    if (cod == 1)
    {
        (*pokemons)[*numPokemons].CodPokemon = 1;
        strcpy((*pokemons)[*numPokemons].NomePokemon, "Pikachu");
        strcpy((*pokemons)[*numPokemons].TipoPokemon, "Eletrico");
        (*pokemons)[*numPokemons].Niv = 0;
        (*pokemons)[*numPokemons].Exp = 0;
        (*pokemons)[*numPokemons].Ataq = 10;
        (*pokemons)[*numPokemons].Def = 5;
        (*pokemons)[*numPokemons].Vida = 15;
        (*pokemons)[*numPokemons].numGolpes = 0; //mudei aui

        printf("Pokemon %d:\n  -Nome:%s\n  -Tipo:%s\n  -Nivel:%d\n  -Exp:%d\n  -Ataq:%d\n  -Def:%d\n  -Vida:%d\n",
               *numPokemons + 1, (*pokemons)[*numPokemons].NomePokemon, (*pokemons)[*numPokemons].TipoPokemon,
               (*pokemons)[*numPokemons].Niv, (*pokemons)[*numPokemons].Exp, (*pokemons)[*numPokemons].Ataq,
               (*pokemons)[*numPokemons].Def, (*pokemons)[*numPokemons].Vida);
        InicializarGolpe(i, &((*pokemons)[*numPokemons].SeuGolpe), Ini, &((*pokemons)[*numPokemons].numGolpes));
    }

    (*numPokemons)++;
}

void InicializarGolpe(int res, golpe **golpes, int *Ini, int *numGolpes)
{
    if (*numGolpes == 0)
    {
        *golpes = (golpe *)malloc(1 * sizeof(golpe));
        if (*golpes == NULL)
        {
            printf("Memory allocation failed!\n");
            return;
        }
        *numGolpes = 1;
    }

    if (res == 0)
    {
        (*golpes)[*numGolpes].CodGolpe = 1;
        strcpy((*golpes)[*numGolpes].NomeGolpe, "Ataque");
        strcpy((*golpes)[*numGolpes].TipoGolpe, "Normal");
        (*golpes)[*numGolpes].Bonusataq = 5;
        (*golpes)[*numGolpes].Bonusdef = 0;
        printf("Golpe %d:\n  -Nome:%s\n  -Tipo:%s\n  -Bonus Ataque:%d\n  -Bonus Defesa:%d\n", *numGolpes,
               (*golpes)[*numGolpes].NomeGolpe, (*golpes)[*numGolpes].TipoGolpe, (*golpes)[*numGolpes].Bonusataq,
               (*golpes)[*numGolpes].Bonusdef);
    }
    (*numGolpes)++;
}