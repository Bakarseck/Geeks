#include<stdio.h>

typedef struct Node Node;
struct Node
{
    int data;
    Element *next;
};

typedef struct List List;
struct List
{
    Node *Head;
};

List *initialisation()
{
    List *liste = malloc(sizeof(*liste));
    Node *node = malloc(sizeof(*node));

    if (liste == NULL || element == NULL )
    {
        exit(EXIT_FAILURE);
    }
    
    node->data = 0;
    node->next = NULL;
    liste->Head = node;

    return liste;
}
