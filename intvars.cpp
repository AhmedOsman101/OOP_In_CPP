// demonstrates integer variables
#include <iostream>
// using namespace std;
int main()
{
    int var1;         // define var1
    int var2;         // define var2
    var1 = 20;        // assign value to var1
    var2 = var1 + 10; // assign value to var2
    std::cout
        << var1
        << " + 10 is "
        << var2
        << std::endl; // output text and output value of var2
    return 0;
}
