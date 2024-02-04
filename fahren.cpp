#include <iostream>
int main(int argc, char *argv[])
{
    int tempf;
    std::cout << "Enter the temp in F: ";
    std::cin >> tempf;
    float tempc = (tempf - 32) * (5.0 / 9.0); // cpp defaults to integer division
    std::cout
        << "the temp in C is: "
        << tempc
        << std::endl;
}
