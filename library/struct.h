#ifndef STRUCT_H
#define STRUCT_H

struct Point
{
    int x;
    int y;
};
typedef struct Point Point;

struct Personne
{
    char nom[100];
    char prenom[100];
    char adresse[1000];
    
    int age;
    int isEtudiant;
};
typedef struct Personne Personne;

void initialiserCoordonnees(Point* point1)
{
    (*point1).x = 0;
    (*point1).y = 0;
}

#endif