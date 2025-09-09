#include <cmath>
#include <iostream>
#include <string>

using namespace std;

string bmi(double w, double h) {
  double bmi = w / pow(h, 2);

  if (bmi <= 18.5) return "Underweight";
  else if (bmi <= 25.0) return "Normal";
  else if (bmi <= 30.0) return "Overweight";
  else return "Obese";
}

int main() {
  cout << bmi(50, 1.80) << endl;
}
