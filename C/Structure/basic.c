#include<stdio.h>
int main(int argc, char const *argv[])
{
    struct pokemon
    {
        int power;
        int hp;
        int attack;
    };
    struct pokemon pikachu;
    {
        printf("Enter pikachu's  attack  :  ");
        scanf("%d",&pikachu.attack);
    //    pikachu.attack = 100;
       pikachu.hp =12;
       pikachu.power = 100;

    };
 printf("%d",pikachu.attack);   
    return 0;
}
