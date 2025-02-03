#include<stdio.h>
#include<string.h>
typedef struct pokemon
{
    int hp;
    int speed;
    int attack;
    char tier;
    char name[15];
} pokemon;
void change (pokemon*p)
{
    // (*p).hp = 50;
    p->hp = 50;
    // (*p).attack = 100;
    p->attack = 100;
    // (*p).speed = 400;
    p->speed = 400;
    // (*p).tier = 'A';
    p->tier = 'A';
    strcpy(p->name, "Raichu");
}
int main(int argc, char const *argv[])
{
    pokemon pikachu = {50,100,160,'S',"pikachu"};
    // pikachu.hp = 100;
    // pikachu.attack = 20;
    // pikachu.speed = 50;
    // pikachu.tier = 'S';
    // strcpy(pikachu.name, "pikachu");
    change(&pikachu);
    printf("%d", pikachu.speed);
    return 0;
}
