#pragma once
#include <iostream>
#include <vector>

#include "Item.h"

class Meal
{
public:
private:
    std::vector<Item *> items;

public:
    void addItem(Item *item)
    {
        items.push_back(item);
    }

    float getCost()
    {
        float cost = 0.0;

        for (Item *item : items)
        {
            cost += item->price();
        }

        return cost;
    }

    void showItems()
    {
        for (Item *item : items)
        {
            std::cout << "Item : " + item->name() + "\n";
            std::cout << "Packing : " + item->packing()->pack() + "\n";
            std::cout << "Price : " + std::to_string(item->price()) + "\n";
        }
    }
};