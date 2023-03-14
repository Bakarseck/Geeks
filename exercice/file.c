#include <stdio.h>
#include <stdlib.h>

void check(FILE *file) {
    if (file == NULL)
    {
        exit(1);
    }
    
}

int main() {
    FILE *file, *result;
    file = fopen("big.txt", "r"); // read only
    check(file);

    result = fopen("result.txt", "w");
    check(result);

    printf("Traitement en cours...\n");

    /*--------------------------------------------------------------------------*/

    char current_character, last_character ;
    int count = 0 ;

    if ((last_character = fgetc(file)) != EOF) // first character
    {
        count++;

        while ( (current_character = fgetc(file)) != EOF ) // looping while the character is EOF End Of File
        {
            if (current_character == last_character) {
                count++;
            } else 
            {
                fprintf(result, "%c%d", last_character, count);
                last_character = current_character;
                count = 1;
            }
        }
        fprintf(result, "%c%d", last_character, count);
    }

    fclose(file);
    fclose(result);
    
    return 0;
}