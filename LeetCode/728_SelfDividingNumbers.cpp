#include "iostream"
#include "string"
#include "vector"
using namespace std;
vector<int> selfDividingNumbers(int left, int right) {
  vector<int> ans;
  int temp, num1, num2;
  for (int i = left; i <= right; ++i) {
    if (i < 10)
      ans.push_back(i);
    else {
      temp = i, num1 = i;
      while (num1) {
        num2 = num1 % 10;
        if (num2 == 0 || temp % num2 != 0)
          break;
        num1 /= 10;
      }
      if (num1 == 0)
        ans.push_back(i);
    }
  }
  return ans;
}
int main() {
  for (int x : selfDividingNumbers(1, 22))
    cout << x << " ";
  cout << endl;
  return 0;
}