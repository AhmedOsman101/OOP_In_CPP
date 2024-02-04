#include <iostream>

using std::cerr;
using std::cin;
using std::cout;
using std::endl;

double calculator(double num1, char action, double num2)
{
    double result;
    switch (action)
    {
    case '+':
        result = num1 + num2;
        break;
    case '-':
        result = num1 - num2;
        break;
    case '*':
    case 'X':
    case 'x':
        result = num1 * num2;
        break;
    case '/':
    case '÷':
        result = num1 / num2;
        break;
    default:
        cerr << "Invalid operator." << endl;
        break;
    }

    return result;
}

int main()
{
    double num1, num2;
    char action; // char stores one character by default

    cout << "Enter the first number: ";
    cin >> num1;

    cout << "Enter the operation: ";
    cin >> action;

    cout << "Enter the second number: ";
    cin >> num2;

    cout
        << num1
        << ' '
        << action
        << ' '
        << num2
        << " = "
        << calculator(num1, action, num2)
        << endl;

    return 0;
}
