#include "ABR.h"
#include <stdlib.h>

int main(int argc, char *argv[]) {
    Tree test = addToTree("check");
    test = addToTree(test, "other");
    test = addToTree(test, "word");
    test = addToTree(test, "make");
    test = addToTree(test, "test");
    test = addToTree(test, "vscode");
    test = addToTree(test, "tree");
    displayTree(test);
    return 0;
}