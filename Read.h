//
// Created by 1 on 29.06.2019.
//

#ifndef INC_2_READ_H
#define INC_2_READ_H

#include <string>
#include <vector>

using namespace std;

class Reader {
private:
    int number;

public:
    const char *read();
    int readNumber();

};


#endif //INC_2_READ_H
