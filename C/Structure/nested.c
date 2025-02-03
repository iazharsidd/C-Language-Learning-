#include <stdio.h>
#include <string.h>
int main(int argc, char const *argv[])
{
    typedef struct pokemon
    {
        int hp;
        int attack;
        int speed;
        char tier;
        char name[50];
    } pokemon;
    typedef struct legendarypokemon
    {
        pokemon n;
        char abitlity[10];
    } legendarypokemon;
    legendarypokemon mewtwo;
    mewtwo.n.attack = 100;
    strcpy(mewtwo.n.name, "mewtwo");
    strcpy(mewtwo.abitlity, "Pressure");
    

    return 0;
}
