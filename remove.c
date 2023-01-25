#include "library/lib.h"

int main(int numberOfArguments, char** arguments)
{
    remove(arguments[1]);
    return 0;
}