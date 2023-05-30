#pragma once
#include <iostream>

#include "Shape.h"

class RoundedRectangle : public Shape
{
public:
    void draw()
    {
        std::cout << "Inside RoundedRectangle::draw() method.\n";
    }
};