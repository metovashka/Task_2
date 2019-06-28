//
// Created by 1 on 29.06.2019.
//

#ifndef INC_2_INTERFACE_H
#define INC_2_INTERFACE_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Result.h"

class Interface {

public:

    virtual Result *calculate(const char *s) = 0;

};


#endif //INC_2_INTERFACE_H
