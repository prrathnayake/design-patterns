#pragma once
#include <iostream>

class SingleObject
{
private:
    static SingleObject *instance;
    SingleObject(){};

public:
    SingleObject(const SingleObject &singleObject) = delete;
    void operator=(SingleObject const &) = delete;
    static SingleObject *getInstance()
    {
        if (instance == nullptr)
        {
            instance = new SingleObject;
        }
        return instance;
    }
    void showMessage()
    {
        std::cout << "Hello, World!\n";
    }
};