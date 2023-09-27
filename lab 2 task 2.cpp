#include <iostream>
#include <stack>
#include <string>

bool isOperator(char c)
{
    return c == '+' || c == '-' || c == '*' || c == '/';
}

void listOperatorsInBrackets(const std::string &expression)
{
    std::stack<int> bracketStack;

    for (int i = 0; i < expression.length(); i++)
        {
        char currentChar = expression[i];

        if (currentChar == '(')
        {
            bracketStack.push(i);
        } else if (currentChar == ')')
        {
            if (!bracketStack.empty())
            {
                int start = bracketStack.top();
                bracketStack.pop();
                std::cout << "Operators in brackets at positions " << start << " to " << i << ": ";
                for (int j = start; j <= i; j++)
                {
                    if (isOperator(expression[j]))
                    {
                        std::cout << expression[j] << ' ';
                    }
                }
                std::cout << std::endl;
            }
        }
    }
}

int main() {
    std::string userInput;

    std::cout << "Enter an arithmetic expression: ";
    std::cin >> userInput;

    listOperatorsInBrackets(userInput);

    return 0;
}
