#include "calculator.h"
#include <stdexcept>

double Calculator::Add(double a, double b) { return a + b; }

double Calculator::Subtract(double a, double b) { return a - b; }

double Calculator::Multiply(double a, double b) { return a * b; }

double Calculator::Divide(double a, double b) {
  if (b == 0) {
    throw std::runtime_error("Cannot divide by zero");
  }
  return a / b;
}
