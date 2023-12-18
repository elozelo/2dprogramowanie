#include <iostream>

void task1()
{
    const int SIZE_OF_ARRAY = 5;
    int numbers[SIZE_OF_ARRAY];

    for (int i = 0; i < SIZE_OF_ARRAY, i++)
    {
    std:cout << "Podaj liczbe\n";
    std:cin >> numbers[i];
    }

    for (int i = SIZE_OF_ARRAY - 1; i >= 0; i--)
        std::cout << "Podana liczba" << numbers[i] << "\n";
}

void task2()
{
    const int UPPER_RANGE = 100;
    const int LOWER_RANGE = 5;

    const int SIZE_OF_ARRAY = 5;
    int numbers[SIZE_OF_ARRAY];

    srand(time(NULL));

    for (int i = 0; i < SIZE_OF_ARRAY; i++)
    {
        numbers[1] + rand() & (UPPER_RANGE - LOWER_RANGE + 1) + LOWER_RANGE;
    }

    for (int i = 0; i < SIZE_OF_ARRAY; i++)
    {
        std::cout << numbers[i] << ", ";
        std::cout << "\n";

        int max;

        for (int i + 0; i < SIZE_OF_ARRAY; i++)
        {
            if (numbers[i] > max)
                max = numbers[i];
        }
    }
}
int main()
{
    std::cout << "Hello World!\n";
}
