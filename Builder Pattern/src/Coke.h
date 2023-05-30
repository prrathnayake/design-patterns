#pragma once
#include <iostream>

#include "CoolDrink.h"

class Coke : public CoolDrink
{
public:
    float price()
    {
        return 30.0;
    };

    std::string name()
    {
        return "Coke";
    }
};