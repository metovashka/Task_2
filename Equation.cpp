//
// Created by 1 on 29.06.2019.
//

#include "Equation.h"
#include <math.h>

float *decision(int a, int b, int c) {


    float D = b * b - 4 * a * c;

    if (D < 0) {
        return NULL;
    } else {
        float *result = new float[1];
        result[0] = (-b - sqrt(D)) / (float) (2 * a);
        result[1] = (-b + sqrt(D)) / (float) (2 * a);
        return result;
    }

}

Result *Equation::calculate(const char *s) {

    int a, b, c;
    char *str;
    int i = 0;

    while (s[i] != 'x') {
        i++;
    }

    str = new char[i];
    memcpy(str, &s[0], i);
    str[i] = '\0';

    a = atoi(str);

    int j = i + 1;
    while (s[j] != 'x') {
        j++;
    }

    j = j - i;
    delete[] str;
    str = new char[j];
    memcpy(str, &s[i + 3], j);
    str[j] = '\0';

    b = atoi(str);


    i = j;
    while (s[j] != '=') {
        j++;
    }

    j = j - i;

    delete[] str;
    str = new char[j];
    memcpy(str, &s[i + 2], j);
    str[j] = '\0';

    c = atoi(str);
    delete[] str;

    float *res = decision(a, b, c);

    if (res != NULL) {
        Result *result = new Result(2, res);
        return result;

    } else { return NULL; }


}