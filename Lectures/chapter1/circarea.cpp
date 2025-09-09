#include <iostream>
int main() {
  int radius;
  std::cout << "Enter the radius of the circle: ";
  std::cin >> radius;
  const float PI = 3.14159F;
  float area = PI * radius * radius;
  std::cout << "The area of the circle is: " << area << std::endl;
}
