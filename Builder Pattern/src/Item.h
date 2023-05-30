#pragma once
#include <iostream>

#include "Packing.h"

class Item
{
public:
    virtual std::string name() = 0;
    virtual Packing *packing() = 0;
    virtual float price() = 0;
};