#include <iostream>
#include <string>

std::string even_or_odd(int number)
{
    if (number % 2 == 0)
        return "even";
    return "odd";

    /* Other solution */
    return (number % 2 == 0) ? "Even" : "Odd";
}

int main()
{
    std::cout << even_or_odd(5) << std::endl;
    return 0;
}
