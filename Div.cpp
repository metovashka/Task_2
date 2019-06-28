#include "Div.h"

Result *Div::calculate(const char *s) {

    int a, b;
    char *str;
    int i = 0;

    while (s[i] != '/') {
        i++;
    }

    str = new char[i];
    memcpy(str, &s[0], i);
    str[i] = '\0';

    a = atoi(str);

    int j = i + 1;
    while (s[j] != '\0') {
        j++;
    }

    j = j - i;
    delete[] str;
    str = new char[j];
    memcpy(str, &s[i + 1], j);
    str[j] = '\0';

    b = atoi(str);

    float *res = new float[0];
    res[0]=a/b;
    Result *result = new Result(1, res);
    return result;

}

