#include "iostream"
#include "vector"
#include <algorithm>
using namespace std;
/*
vector<int> plusone(vector<int> &digits) {
  if (digits.size() >= 2) {
    reverse(digits.begin(), digits.end());
    digits[0] += 1;
    for (int i = 0; i < digits.size() - 1; ++i) {
      if (digits[i] == 10) {
        digits[i] = 0;
        digits[i + 1] += 1;
      } else
        break;
    }
    if (digits[digits.size() - 1] == 10) {
      digits[digits.size() - 1] = 0;
      digits.push_back(1);
    }
    reverse(digits.begin(), digits.end());
  } else {
    if (digits[0] == 9) {
      digits[0] = 1;
      digits.push_back(0);
    } else
      digits[0] += 1;
  }
  return digits;
}
*/
vector<int> plusOne(vector<int> &digits) {
  int i = digits.size() - 1;
  if (i == 0 && digits[0] == 9) {
    digits[0] = 1;
    digits.push_back(0);
  } else if (digits[i] == 9 && i > 0) {
    if (digits[i] == 9) {
      digits[i] = 0, digits[i - 1] += 1;
      --i;
    }
    while (digits[i] > 9 && i >= 1) {
      digits[i] = 0, digits[i - 1] += 1;
      --i;
    }
    if (digits[0] > 9) {
      digits[0] = 1;
      digits.push_back(0);
    }
  } else
    digits[i] += 1;
  return digits;
}
int main(int argc, char const *argv[]) {
  vector<int> digits = {9, 9, 9};
  for (int x : plusOne(digits))
    cout << x << endl;
  return 0;
}
