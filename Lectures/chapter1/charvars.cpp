#include <iostream>
int main(int argc, char *argv[]) {
    char charvar1 = 'A';               // define char variable as character
    char charvar2 = '\t';              // define char variable as tab
    std::cout << charvar1 << charvar2; // display character
    charvar1 = 'B';                    // set char variable to char constant
    std::cout << charvar1 << '\n';     // display the newline character
    return 0;
}
