//
// Created by 1 on 29.06.2019.
//

#include "Read.h"
#include <string.h>
#include <iostream>
#include <fstream>

const char *Reader::read() {

    string path = "C:\\Users\\1\\CLionProjects\\(2)\\example.txt";

    ifstream input;

    input.open(path);

    if (input.is_open()) {

        int first_string;
        string second_string;

        input >> first_string;
        input >> second_string;

        int len = second_string.length();

        char *result = new char[len];

        number = first_string;

        memcpy(&result[0], &second_string[0], len);

        result[len + 1] = '\0';

        input.close();

        return result;
    }
}
 int Reader::readNumber() {
     return number;
}
