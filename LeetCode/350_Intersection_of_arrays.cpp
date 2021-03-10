#include "iostream"
#include "vector"
#include <algorithm>
using namespace std;
vector<int> intersect(vector<int> &nums1, vector<int> &nums2) {
  vector<int> nums_min, nums_max, Temp;
  if (nums1.size() >= nums2.size())
    nums_min = nums2, nums_max = nums1;
  else
    nums_min = nums1, nums_max = nums2;
  int i = 0, nums_min_size = nums_min.size();
  while (nums_min_size > i) {
    auto it = find(nums_max.begin(), nums_max.end(), nums_min[i]);
    if (it != nums_max.end()) {
      Temp.push_back(nums_min[i]);
      nums_max.erase(it);
    }
    ++i;
  }
  return Temp;
}
int main() {
  // vector<int> nums1 = {4, 9, 5}, nums2 = {9, 4, 9, 8, 4};
  vector<int> nums1 = {1, 1}, nums2 = {1};
  for (auto x : intersect(nums1, nums2))
    cout << x << " ";
  cout << endl;
  return 0;
}