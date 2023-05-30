#pragma once
#include <iostream>

#include "Shape.h"

class Square : public Shape
{
public:
    void draw()
    {
        std::cout << "Inside Square::draw() method.\n";
    }
};