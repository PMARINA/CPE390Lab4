#include <cstdint>
#include <iostream>

using namespace std;

uint32_t sum(uint32_t);

uint32_t sum(uint32_t, uint32_t);

uint32_t sum(uint32_t, uint32_t, uint32_t);

uint32_t sum(uint32_t, uint32_t, uint32_t, uint32_t);

uint32_t sum(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);

uint32_t sum(uint32_t a, uint32_t b, uint32_t c, uint32_t d, uint32_t e,
             uint32_t f);

int main() {
  uint32_t ans = 0;
  ans = sum(1);
  cout << "Sum = " << ans << endl;
  ans = sum(1, 2);
  cout << "Sum = " << ans << endl;
  ans = sum(1, 2, 3);
  cout << "Sum = " << ans << endl;
  ans = sum(1, 2, 3, 4);
  cout << "Sum = " << ans << endl;
  ans = sum(1, 2, 3, 4, 5);
  cout << "Sum = " << ans << endl;
  ans = sum(1, 2, 3, 4, 5, 6);
  cout << "Sum = " << ans << endl;
}