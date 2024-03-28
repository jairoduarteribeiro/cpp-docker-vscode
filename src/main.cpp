#include "calculator.h"
#include <iostream>

int main() {
  Calculator calc;
  std::cout << "Add(5, 3): " << calc.Add(5, 3) << "\n";
  std::cout << "Subtract(5, 3): " << calc.Subtract(5, 3) << "\n";
  std::cout << "Multiply(5, 3): " << calc.Multiply(5, 3) << "\n";
  std::cout << "Divide(5, 3): " << calc.Divide(5, 3) << "\n";
  try {
    std::cout << "Divide(5, 0): " << calc.Divide(5, 0) << "\n"; // This will throw
  } catch (const std::runtime_error &e) {
    std::cout << e.what() << "\n";
  }
  return 0;
}
