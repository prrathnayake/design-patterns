#pragma once
#include <iostream>

#include "Packing.h"

class Wrapper : public Packing
{
public:
    std::string pack()
    {
        return "Wrapper";
    }
};