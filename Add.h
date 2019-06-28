#ifndef INC_2_ADD_H
#define INC_2_ADD_H

#include "Interface.h"

class Add : public Interface{

public:

    Result *calculate(const char *s);
};

#endif //INC_2_ADD_H
