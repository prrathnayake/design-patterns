#pragma once
#include <iostream>

#include "Meal.h"
#include "VegBurger.h"
#include "Coke.h"
#include "ChickenBurger.h"
#include "Pepsi.h"

class MealBuilder
{
public:
    Meal *preperVegMeal()
    {
        Meal *meal = new Meal;
        VegBurger *vegBurger = new VegBurger;
        meal->addItem(vegBurger);
        Coke *coke = new Coke;
        meal->addItem(coke);
        return meal;
    }

    Meal *preperNonVegMeal()
    {
        Meal *meal = new Meal;
        ChickenBurger *chickenBurger = new ChickenBurger;
        meal->addItem(chickenBurger);
        Pepsi *pepsi = new Pepsi;
        meal->addItem(pepsi);
        return meal;
    }
};