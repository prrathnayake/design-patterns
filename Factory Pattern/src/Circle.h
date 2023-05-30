#pragma once
#include <iostream>

#include "Shape.h"

class Circle : public Shape
{
public:
    void draw()
    {
        std::cout << "Inside Circle::draw() method.\n";
    }
};