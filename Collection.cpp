#include "Collection.h"
#include "Equation.h"
#include "Add.h"
#include "Sub.h"
#include "Multi.h"
#include "Div.h"


int Collection::add() {

    Interface *equations = new Equation();
    Collection.push_back(equations);
    Interface *add= new Add();
    Collection.push_back(add);
    Interface *sub= new Sub();
    Collection.push_back(sub);
    Interface *multi= new Multi();
    Collection.push_back(multi);
    Interface *div= new Div();
    Collection.push_back(div);

}

Interface *Collection::get_operation(unsigned int num) {
    if (num > Collection.size() || num < 0) {
        return NULL;
    }

    return Collection.at(num - 1);
}