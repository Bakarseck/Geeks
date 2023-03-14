#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef enum Boolean
{
    false,//0
    true //1
} Boolean ;

typedef struct Player
{
    char username[256];
    int hp;
    int mp;
} Player ;


/*----------------- Player ------------------*/

void createPlayer(Player *p, char *username) {
    strcpy(p->username, username);
    p->hp = 100;
    p->mp = 100;
}

/*----------------- Player ------------------*/




/*----------------- FILE ------------------*/

void saveToFile(Player *p) {
    FILE *file ;
    file = fopen("player.txt", "w+");

    if (file == NULL) {
        printf("Erreur !!!");
        exit(0);
    }

    fprintf(file, "%s %d %d\n", p->username, p->mp, p->hp );

    fclose(file);
}

/*----------------- FILE ------------------*/

int main() {

    Player p1, p2;

    createPlayer(&p1, "Bakar");
    createPlayer(&p2, "Barham");
    createPlayer(&p2, "Ousmane");

    saveToFile(&p1);
    saveToFile(&p2);


}