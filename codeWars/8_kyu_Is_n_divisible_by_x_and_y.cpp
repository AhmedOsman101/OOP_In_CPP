#include <iostream>
using namespace std;

bool isDivisible(int n, int x, int y) { return (n % x == 0 && n % y == 0); }

int main() {
    cout << isDivisible(12, 3, 4) << "\n"
        << isDivisible(5, 9, 15) << "\n"
        << endl;
}
