#include <stdio.h>
#include <string.h>


/*
    (*monPointeur).un_champ = X;
    monPointeur->un_champ = X;
*/

typedef struct Player
{
    signed char username[256];
    int hp;
    int mp;
} Player ;

/*-----------------Player------------------*/

void createPlayer(Player *p) {
    strcpy(p->username, "Barham");
    p->hp = 100;
    p->mp = 80 ;
}

void initialiserPlayer(Player *p) {
    strcpy(p->username, "");
    p->hp=0;
    p->mp=0;
}

/*-----------------Player------------------*/


int main(void) {
    Player p1 ;

    createPlayer(&p1);

    printf("Nom du joueur : %s \n", p1.username);
    printf("PV : %d | PM : %d \n", p1.hp, p1.mp);

    initialiserPlayer(&p1);

    printf("Nom du joueur : %s \n", p1.username);
    printf("PV : %d | PM : %d \n", p1.hp, p1.mp);

}