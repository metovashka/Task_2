#ifndef INC_2_SUB_H
#define INC_2_SUB_H

#include "Interface.h"

class Sub : public Interface{

public:

    Result *calculate(const char *s);
};

#endif //INC_2_SUB_H
