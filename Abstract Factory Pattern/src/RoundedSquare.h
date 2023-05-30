#pragma once
#include <iostream>

#include "Shape.h"

class RoundedSquare : public Shape
{
public:
    void draw()
    {
        std::cout << "Inside RoundedSquare::draw() method.\n";
    }
};