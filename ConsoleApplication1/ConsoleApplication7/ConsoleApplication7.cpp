// ConsoleApplication7.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>


class B
{
private:
    int fieldA;
    int fieldB;

public:
    B()
    {
        fieldA = 5;
        fieldB = 4;

    }

    int GetFieldA()
    {
        return fieldA;
    }


    int GetFieldB()
    {
        return fieldB;
    }
};
int main()
{
    std::cout << "Hello World!\n";
}
class C
{protected:    int fieldA;
        std::string name;

public:

        C()
    {
        fieldA = 15;
        name = "C";
    }

        int GetFieldA()
        {
            return fieldA;
        }
        void showInfo()
        {
            std::cout << "Informacja na temat klasy" << name << "\n";
            std::c
        }
};