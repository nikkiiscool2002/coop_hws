#include "roman_numerals.h"
#include "stdlib.h"

char *to_roman_numeral(unsigned int number){
    unsigned int t = number;
    char *result = malloc(20 * sizeof(char));
    unsigned int i = 0;
    while ((t > 0) && (i < 20)){
        if (t >= 1000){result[i] = 'M'; i++; t-=1000;}
        else if (t >= 500){result[i] = 'D'; i++; t-=500;}
        else if (t >= 100){result[i] = 'C'; i++; t-=100;}
        else if (t >= 50){result[i] = 'L'; i++; t-=50;}
        else if (t >= 10){result[i] = 'X'; i++; t-=10;}
        else if (t >= 5){result[i] = 'V'; i++; t-=5;}
        else if (t >= 1){result[i] = 'I'; i++; t-=1;}
        // if (t > 1000){result[i] = 'M'; i++; t-=1000}
        // if (t > 1000){result[i] = 'M'; i++; t-=1000}
        // if (t > 1000){result[i] = 'M'; i++; t-=1000}


    }
    return result;
}
