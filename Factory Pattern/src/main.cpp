#include <iostream>

#include "ShapeFactory.h"
#include "Shape.h"

int main()
{
    ShapeFactory *shapeFactory = new ShapeFactory;

    Shape *shape1 = shapeFactory->getType("CIRCLE");
    shape1->draw();

    Shape *shape2 = shapeFactory->getType("RECTANGLE");
    shape2->draw();

    Shape *shape3 = shapeFactory->getType("SQUARE");
    shape3->draw();

    return 0;
}