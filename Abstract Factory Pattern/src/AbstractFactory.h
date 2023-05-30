#pragma once
#include <iostream>

#include "Shape.h"

class AbstractFactory
{
public:
    virtual Shape *getShape(std::string shapeType) = 0;
};