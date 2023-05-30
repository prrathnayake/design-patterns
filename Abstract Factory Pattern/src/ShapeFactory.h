#pragma once
#include <iostream>

#include "AbstractFactory.h"
#include "Shape.h"
#include "Rectangle.h"
#include "Square.h"

class ShapeFactory : public AbstractFactory
{
public:
    Shape *getShape(std::string shapeType)
    {
        if (shapeType == "SQUARE")
        {
            Square *square = new Square;
            return square;
        }
        else if (shapeType == "RECTANGLE")
        {
            Rectangle *rectangle = new Rectangle;
            return rectangle;
        }
        else
        {
            return nullptr;
        }
    }
};