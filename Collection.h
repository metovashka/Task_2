#ifndef INC_2_COLLECTION_H
#define INC_2_COLLECTION_H


#include <vector>
#include "Interface.h"

using namespace std;

class Collection {
private:
    vector<Interface *> Collection;
public:
    int add();

    Interface *get_operation(unsigned int num);
};


#endif //INC_2_COLLECTION_H
