//
// Created by 1 on 29.06.2019.
//

#ifndef INC_2_RESULT_H
#define INC_2_RESULT_H

#include <iostream>

class Result {
private:
    int number;
    float *res;

public:

    Result(int, float *);

    ~Result();

    int get_num();

    float *get_res();

    friend std::ostream &operator<<(std::ostream &out, Result *res);
};



#endif //INC_2_RESULT_H
