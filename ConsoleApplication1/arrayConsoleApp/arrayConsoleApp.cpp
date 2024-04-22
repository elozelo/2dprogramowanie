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
void task3() {
    const int UPPER_RANGE = 10;
    const int LOWER_RANGE = 5;

    const int SIZE_OF_ARRAY = 3;
    int numbers[SIZE_OF_ARRAY];

    srand(time(NULL));

        for (int i = 0; i < SIZE_OF_ARRAY; i++)
        {
            numbers[i] = rand() % (UPPER_RANGE - LOWER_RANGE + 1) + LOWER_RANGE;
        }

        for (int i = 0; i < SIZE_OF_ARRAY; i++)
            std::cout << numbers[i] << ",";
        std::cout << "\n";

        int sum = 0;
        for (int i = 0; i < SIZE_OF_ARRAY; i++)
        {
            sum = sum + numbers[i];
        }

        double avrage = sum * 1.0 / SIZE_OF_ARRAY;
        std::cout << "Œredia liczb to: " << avrage << "\n";

        //wersja 2

        std::cout << "\nWersja 2\n";
        int numbersOfOccurances[UPPER_RANGE - LOWER_RANGE + 1];
        for (int i = 0; i < UPPER_RANGE - LOWER_RANGE + 1; i++);
        {
            numbersOfOccurances[numbers[j] - LOWER_RANGE]++                        
                            `   `   ---*/*/*/
        }
}

int main()
{
    std::cout << "Hello World!\n";
}
