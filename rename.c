#include "library/lib.h"

int main(int numberOfArguments, char** arguments)
{
    rename(arguments[1], arguments[2]);

    return 0;
}