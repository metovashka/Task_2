//
// Created by 1 on 29.06.2019.
//

#ifndef INC_2_EQUATION_H
#define INC_2_EQUATION_H

#include "Interface.h"

class Equation : public Interface{

public:

    Result *calculate(const char *s);
};


#endif //INC_2_EQUATION_H
