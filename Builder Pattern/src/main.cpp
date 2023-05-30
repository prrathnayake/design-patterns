#include <iostream>

#include "MealBuilder.h"

int main()
{
    MealBuilder *mealBulder = new MealBuilder;

    Meal *vegMeal = mealBulder->preperVegMeal();
    std::cout << "Veg Meal\n";
    vegMeal->showItems();
    std::cout << "Total Cost : " + std::to_string(vegMeal->getCost()) + "\n";

    Meal *nonVegMeal = mealBulder->preperNonVegMeal();
    std::cout << "\nNonVeg Meal\n";
    nonVegMeal->showItems();
    std::cout << "Total Cost : " + std::to_string(nonVegMeal->getCost()) + "\n";

    return 0;
}