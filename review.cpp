#include <iostream>
using namespace std;

void increment(int input) { input++; }

int increment_returns_value(int input) { return ++input; }

void increment(int* input) { (*input)++; }

void increment_2(int& input) { input++; }

int main() {
  int b = 5;
  int b2 = 100;
  int* c = &b;
  int* c2 = &b2;
  int** d = &c;
  *c = 6;    // b=6
  **d = 7;   // b=7
  d = &c2;   // d->c2->b2 = 100
  **d = 97;  // b2 = 97;
  b = 5;
  increment(b);
  // b = 5
  increment(*c);  // equivalent to increment(b);
  // b = 5
  increment_returns_value(*c);
  // b = 5
  *c = increment_returns_value(*c);
  // b = 6
  increment(c);
  // b = 7
  increment_2(b);
  // b = 8
  cout << b << endl;
}
