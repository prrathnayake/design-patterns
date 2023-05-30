#include <iostream>

#include "SingleObject.h"

SingleObject *SingleObject::instance = nullptr;

int main()
{
    SingleObject *singleObject1 = SingleObject::getInstance();
    singleObject1->showMessage();

    SingleObject *singleObject2 = SingleObject::getInstance();
    singleObject2->showMessage();

    if (singleObject1 == singleObject2)
    {
        std::cout << "Both objects point to same instance\n";
    }
    return 0;
}
