#include "roman_numerals.h"
#include "stdlib.h"
#include "stdio.h"

char *to_roman_numeral(unsigned int number){
    unsigned int t = number;
    char *result = calloc(20 , sizeof(char));
    unsigned int i = 0;
    while ((t > 0) && (i < 20)){
        if (t >= 1000){result[i] = 'M'; i++; t-=1000;}
        else if (t >= 900){result[i] = 'C'; result[++i] = 'M'; i++; t -= 900;}
        else if (t >= 500){result[i] = 'D'; i++; t-=500;}
        else if (t >= 400){result[i] = 'C'; result[++i] = 'D'; i++; t -= 400;}
        else if (t >= 100){result[i] = 'C'; i++; t-=100;}
        else if (t >= 90){result[i] = 'X'; result[++i] = 'C'; i++; t -= 90;}
        else if (t >= 50){result[i] = 'L'; i++; t-=50;}
        else if (t >= 40){result[i] = 'X'; result[++i] = 'L'; i++; t -= 40;}
        else if (t >= 10){result[i] = 'X'; i++; t-=10;}
        else if (t >= 9){result[i] = 'I'; result[++i] = 'X'; i++; t -= 9;}
        else if (t >= 5){result[i] = 'V'; i++; t-=5;}
        else if (t >= 4){result[i] = 'I'; result[++i] = 'V'; i++; t -= 4;}
        else if (t >= 1){result[i] = 'I'; i++; t-=1;}
        printf("%u\n , %s", t, result);
    }


    return result;
}
