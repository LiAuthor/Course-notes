#include "algorithm"
#include "iostream"
#include "vector"
using namespace std;
int main(int argc, char const *argv[]) {
  vector<int> nums(10);
  nums = {1, 2, 2, 2, 2, 1, 2, 1, 2, 1};
  sort(nums.begin(), nums.end());
  int counter = 0, i = 0, tem = 0, n = nums.size() / 2;
  while (i < nums.size()) {
    tem = nums[i];
    while (tem == nums[i]) {
      ++counter;
      ++i;
      if (counter > n)
        cout << nums[i - 1];
    }
    counter = 0;
  }
  cout << endl;
  return 0;
}
