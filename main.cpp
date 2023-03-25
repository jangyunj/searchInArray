#include <iostream>
#include <string>

int searchArray(std::string foods[], int size, std::string myFood);

int main()
{
    std::string foods[] = {"pizza", "burger", "fries"};
    int size = sizeof(foods) / sizeof(std::string);
    int index;
    std::string myFood;

    std::cout << "Enter food to search: " << '\n';
    std::getline(std::cin, myFood); // in case the user enters a space

    index = searchArray(foods, size, myFood);

    if (index != -1)
    {
        std::cout << myFood << " is at index " << index;
    }
    else
    {
        std::cout << myFood << " is not in the array";
    }
}

int searchArray(std::string foods[], int size, std::string myFood)
{
    for (int i = 0; i < size; i++)
    {
        if (foods[i] == myFood)
        {
            return i;
        }
    }
    return -1;
}
