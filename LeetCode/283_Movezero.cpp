#include "iostream"
#include "vector"
#include <algorithm>
using namespace std;
void moveZeroes(vector<int> &nums) {
  sort(nums.begin(), nums.end());
  auto it = nums.begin();
  while (*it == 0 && it != nums.end()) {
    nums.erase(it);
    nums.push_back(0);
    ++it;
  }
}
int main() {
  // vector<int> nums1 = {4, 9, 5}, nums2 = {9, 4, 9, 8, 4};
  vector<int> nums = {0, 0, 2};
  // sort(nums.begin(), nums.end());
  auto it = nums.begin();
  // cout << "it=" << *it << endl;
  /*
  while (it != nums.end()) {
    if (*it == 0) {
      nums.erase(it);
      nums.push_back(0);
    } else {
      ++it;
    }
  }
  */
  int length = nums.size(), j = 0;
  for (int i = 0; i < length; ++i) {
    if (nums[i] != 0) {
      nums[j] = nums[i];
      ++j;
    }
  }
  for (; j < length; ++j)
    nums[j] = 0;
  for (auto x : nums)
    cout << x << " ";
  cout << endl;
  return 0;
}