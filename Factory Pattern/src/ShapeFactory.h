#pragma once
#include <iostream>

#include "Shape.h"
#include "Circle.h"
#include "Rectangle.h"
#include "Square.h"

class ShapeFactory
{
public:
public:
    Shape *getType(std::string shapeType)
    {
        if (shapeType == "CIRCLE")
        {
            Circle *circle = new Circle;
            return circle;
        }
        else if (shapeType == "RECTANGLE")
        {
            Rectangle *rectangle = new Rectangle;
            return rectangle;
        }
        else if (shapeType == "SQUARE")
        {
            Square *square = new Square;
            return square;
        }
        else
        {
            return nullptr;
        }
    }
};