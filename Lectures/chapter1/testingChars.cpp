#include <iostream>
using namespace std;

int main() {
    int i = 194;
    char c = i;
    // cout << "c = " << c << "\n\n";
    float result = 'z' / 61.0; // 122 / 61 = 2 (Forced decimal division)
    float result2 = 'z' / 'a'; // 122 / 97 = 1.25 ~ 1
    float result3 =
        (float)'z' / 'a'; // 122 / 97 = 1.25 (Forced decimal division)
    cout << result << endl;
    cout << result2 << endl;
    cout << result3 << endl;
}

/*
    arithmetic operators like +, -, *, /, % converts chars into their ASCII
    values
*/
