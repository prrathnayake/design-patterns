#pragma once
#include <iostream>

#include "Burger.h"

class VegBurger : public Burger
{
public:
    float price()
    {
        return 25.0;
    };

    std::string name()
    {
        return "Veg Burger";
    }
};