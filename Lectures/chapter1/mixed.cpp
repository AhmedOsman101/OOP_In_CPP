// Page: 82, 83
#include <iostream>

using namespace std;

int main()
{
    int count = 7;
    float avgWeight = 155.5F;
    double totalWeight = count * avgWeight;
    cout << "totalWeight = " << totalWeight << endl;
    cout << "totalWeight size in bytes: " << sizeof(totalWeight) << endl;
    return 0;
}
