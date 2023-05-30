#pragma once
#include <iostream>

#include "AbstractFactory.h"
#include "RoundedShapeFactory.h"
#include "ShapeFactory.h"

class FactoryProducer
{
public:
    static AbstractFactory *getFactory(bool rounded)
    {
        if (rounded)
        {
            RoundedShapeFactory *roundedShapeFactory = new RoundedShapeFactory;
            return roundedShapeFactory;
        }
        else
        {
            ShapeFactory *shapeFactory = new ShapeFactory;
            return shapeFactory;
        }
    }
};