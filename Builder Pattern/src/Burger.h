#pragma once
#include <iostream>

#include "Item.h"
#include "Wrapper.h"

class Burger : public Item
{
public:
    Packing *packing()
    {
        Wrapper *wrapper = new Wrapper;
        return wrapper;
    }

    virtual float price() = 0;
};