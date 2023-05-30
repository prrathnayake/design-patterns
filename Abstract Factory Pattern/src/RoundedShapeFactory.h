#pragma once
#include <iostream>

#include "AbstractFactory.h"
#include "Shape.h"
#include "RoundedRectangle.h"
#include "RoundedSquare.h"

class RoundedShapeFactory : public AbstractFactory
{
public:
    Shape *getShape(std::string shapeType)
    {
        if (shapeType == "SQUARE")
        {
            RoundedSquare *square = new RoundedSquare;
            return square;
        }
        else if (shapeType == "RECTANGLE")
        {
            RoundedRectangle *rectangle = new RoundedRectangle;
            return rectangle;
        }
        else
        {
            return nullptr;
        }
    }
};