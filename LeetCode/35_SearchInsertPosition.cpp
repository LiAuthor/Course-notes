#include "algorithm"
#include "iostream"
#include "vector"
using namespace std;
//二分查找算法
int searchInsert(vector<int> &nums, int target) {
  int left = 0, right = nums.size(), mid = 0;
  while (left < right) {
    mid = left + (right - left) / 2;
    if (nums[mid] > target)
      right = mid;
    else if (nums[mid] < target)
      left = mid + 1;
    else
      return mid;
  }
  return left; //此处表示待查数不在nums中
}
int main() {
  vector<int> nums = {1, 2, 3, 4, 5, 6, 7, 9};
  cout << searchInsert(nums, 8) << endl;
  return 0;
}