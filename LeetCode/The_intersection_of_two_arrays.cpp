#include "algorithm"
#include "iostream"
#include "unordered_map"
#include "vector"
using namespace std;
vector<int> intersect(vector<int> &nums1, vector<int> &nums2) {
  vector<int>::iterator it1 = nums1.begin();
  vector<int>::iterator it2 = nums2.begin();
  vector<int> nums3;
  while (nums1.size() != 0 || nums2.size() != 0) {
    while (it1 != nums1.end()) {
      while (it2 != nums2.end()) {
        if (*it1 == *it2)
          nums3.push_back(*it1);
      }
      nums1.erase(it1), ++it1;
      nums2.erase(it2), ++it2;
    }
    vector<int>::iterator it1 = nums1.begin();
    vector<int>::iterator it2 = nums2.begin();
  }
  return nums3;
}
int main() {
  vector<int> nums1 = {4, 9, 5};
  vector<int> nums2 = {9, 4, 9, 8, 4};
  for (auto i : intersect(nums1, nums2))
    cout << i << endl;
  return 0;
}