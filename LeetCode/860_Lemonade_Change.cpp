#include "algorithm"
#include "iostream"
#include "map"
#include "vector"
using namespace std;
bool lemonadeChange(vector<int> &bills) {
  map<int, int> Change;
  int i = 0;
  for (; i < bills.size(); ++i) {
    if (bills[i] == 5) {
      ++Change[5];
    } else if (bills[i] == 10) {
      ++Change[10];
      if (Change[5] > 0)
        --Change[5];
      else
        break;
    } else {
      if (Change[10] >= 1 && Change[5] >= 1) {
        --Change[10];
        --Change[5];
      } else if (Change[5] >= 3) {
        Change[5] -= 3;
      } else {
        break;
      }
    }
  }
  // cout << "5:" << Change[5] << " 10:" << Change[10] << " i=" << i << endl;
  return (i == bills.size()) ? true : false;
}
int main() {
  vector<int> people = {10, 10};
  cout << lemonadeChange(people) << endl;
  return 0;
}