#pragma once
#include <iostream>

#include "Item.h"
#include "Bottle.h"

class CoolDrink : public Item
{
public:
    Packing *packing()
    {
        Bottle *bottle = new Bottle;
        return bottle;
    }

    virtual float price() = 0;
};