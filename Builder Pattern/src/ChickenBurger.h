#pragma once
#include <iostream>

#include "Burger.h"

class ChickenBurger : public Burger
{
public:
    float price()
    {
        return 50.5;
    };

    std::string name()
    {
        return "Chicken Burger";
    }
};