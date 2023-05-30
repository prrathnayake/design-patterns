#pragma once
#include <iostream>

#include "Shape.h"

class Rectangle : public Shape
{
public:
    void draw()
    {
        std::cout << "Inside Rectangle::draw() method.\n";
    }
};