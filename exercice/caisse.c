#include <stdio.h>
#include <stdlib.h>

// typedef enum Etat {
//     fonctionnel,
//     panne
// } Etat ;

typedef struct Vehicule {
    char nom[50];
    char modele[50];
    float reserve;
    float vitesse;
    //Etat etat;
} Vehicule ;


void creerVehicule(Vehicule *vehiculecl) {

    printf("Donner le nom du vehicule : \t");
    scanf("%s", vehicule -> nom);
    printf("Donner le modele du vehicule : \t");
    scanf("%s", vehicule -> modele);
    printf("Donner la réserve du vehicule : \t");
    scanf("%f", &vehicule->reserve);
    printf("Donner la vitesse du vehicule : \t");
    scanf("%f", &vehicule -> vitesse);
    // printf("Donner l'etat du vehicule : \t");
    // scanf("%d", &vehicule -> etat);
}

void makeHead() {
    FILE *file;
    file = fopen("vehicule.txt", "a");

    if (file == NULL)
        exit(1);

    fprintf(file, "Nom,Modele,Reserve,Vitesse,\n");

    fclose(file);
}

void saveFile(Vehicule *vehicule) {
    FILE *file;
    file = fopen("vehicule.txt", "a");

    if (file == NULL)
        exit(1);

    fprintf(file, "%s,%s,%.2f%%,%.2f,\n", vehicule -> nom, vehicule -> modele, vehicule -> reserve, vehicule -> vitesse);

    fclose(file);
}

int main() {

    Vehicule v1;
    Vehicule v2;

    creerVehicule(&v1);
    creerVehicule(&v2);

    makeHead();
    saveFile(&v1);
    saveFile(&v2);
}