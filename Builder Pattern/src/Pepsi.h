#pragma once
#include <iostream>

#include "CoolDrink.h"

class Pepsi : public CoolDrink
{
public:
    float price()
    {
        return 35.0;
    };

    std::string name()
    {
        return "Pepsi";
    }
};