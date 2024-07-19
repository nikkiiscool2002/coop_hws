#include "roman_numerals.h"
#include "stdlib.h"

char *to_roman_numeral(unsigned int number){
    unsigned int t = number;
    char *result = malloc(20 * sizeof(char));
    unsigned int i = 0;
    while ((t > 0) && (i < 20)){
        result[i] = 'I';
        i++;
        t--;
    }
    return result;
}
