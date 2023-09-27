#include <iostream>

bool isNumeric(const char* input)
{

    if (!input || *input == '\0')
    {
        return false;
    }

   while (*input) {
        if (*input < '0' || *input > '9')
        {
            return false;
        }
        ++input;
    }

    return true;
}

int main()
{
    char userInput[100];

    std::cout << "Enter a string: ";
    std::cin.getline(userInput, sizeof(userInput));

    if (isNumeric(userInput))
    {
        std::cout << "The number is numeric." << std::endl;
    }
    else
    {
        std::cout << "The number is not numeric." << std::endl;
    }

    return 0;
}
