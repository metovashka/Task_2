//
// Created by 1 on 29.06.2019.
//

#include "Result.h"
#include <iostream>

Result::Result(int num, float *result) {
    number = num;
    res = result;
}

Result::~Result() {
    delete[] res;
}

int Result::get_num() {
    return number;
}

float *Result::get_res() {
    return this->res;
}

std::ostream &operator<<(std::ostream &out, Result *Result) {

    if (Result == NULL) {
        return out;
    }
    for (int i = 0; i < Result->get_num(); i++) {
        out << Result->get_res()[i];
        out << " ";
    }
    return out;
};