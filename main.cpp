#include <iostream>
#include "Read.h"
#include "Interface.h"
#include "Collection.h"

int main() {

    Reader reader;
    cout<<reader.read()<<endl;

    Collection collection;
    collection.add();

    Interface *Operation = collection.get_operation(reader.readNumber());

    cout << Operation->calculate(reader.read());

    return 0;
}