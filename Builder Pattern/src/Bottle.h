#pragma once
#include <iostream>

#include "Packing.h"

class Bottle : public Packing
{
public:
    std::string pack()
    {
        return "Bottle";
    }
};