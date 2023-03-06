#ifndef ABR_H
#define ABR_H
#include<stdio.h>
#include<stdlib.h>
#include<string.h>


typedef struct node {
    char *word;
    struct node *leftSon, *rightSon;
} Node, *Tree; 


Tree makeTree(char *word) {

    Tree result = (Tree) malloc(sizeof(Node));

    result -> word = (*char) malloc((strlen(word) + 1) * sizeof(char)) ;

    strcpy(result -> word, word);

    result -> leftSon = NULL;
    result -> rightSon = NULL;

    return result ;
}

Tree addToTree(Tree bst, char *word) {

    if(!bst) {
        return makeTree(word);
    }

    if(strcmp(bst->word, word) == 0) {
        printf("This word is already exist !!!")
        return bst ;
    } else 
    if (strcmp(bst -> word, word) > 0 ) { //premier mot est supérieur, la racine est supérieure, on va à gauche
        bst -> leftSon = addToTree(bst -> leftSon, word);
    } else {
        bst -> rightSon = addToTree(bst -> rightSon, word);
    }

    return bst;
}

void DisplayTree(Tree bst) {
    
    if(!bst) {
        printf("Empty tree");
    } else {
        inMechanism(bst) ;
    }
}

void inMechanism(Tree bst) {

    if(bst) {
        inMechanism(bst->leftSon);
        printf("\t%s\n", bst->word);
        inMechanism(bst->rightSon);
    }
}

#endif