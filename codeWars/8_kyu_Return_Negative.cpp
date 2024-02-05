#include <iostream>

using namespace std;

int makeNegative(int num) { return (num > 0) ? -num : num; }

int main() {
    cout << makeNegative(5) << "\n"
         << makeNegative(-5) << "\n"
         << makeNegative(0) << endl;
}
