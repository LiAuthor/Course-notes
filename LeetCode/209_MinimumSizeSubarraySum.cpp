#include "algorithm"
#include "climits"
#include "iostream"
#include "numeric"
#include "vector"
using namespace std;
int minSubArrayLen(int s, vector<int> &nums) {
  /*
  int sum = 0;
  vector<int>::iterator it = nums.begin();
  for (int i = 1; i <= nums.size(); ++i) { //所以此处也要可以等于nums.size()
    it = nums.begin();
    // accumulate(x,y,0)计算的是区间[x,y)前开后闭之间的元素
    while (it + i <= nums.end()) { //所以此处可以=nums.end()
      sum = accumulate(it, it + i, 0);
      // cout << "i=" << i << " sum=" << sum << endl;
      if (sum >= s)
        return i;
      ++it;
    }
  }
  return 0;
  */
  /*
   int min_size = INT_MAX;
   int i = 0, j = 0;
   int sum = 0;

   //首先找到第一个满足条件的两个位置。
   for (; j < nums.size(); j++) {
     if (sum >= s)
       break;
     sum += nums[j];
   }
   if (j == nums.size() && sum < s) //此时说明整个数组的和都小于s的值。
     return false;

   sum -= nums[--j];

   for (; j < nums.size(); j++) {
     sum += nums[j];

     while (sum - nums[i] >= s)
       sum -= nums[i], i++;

     //比较最小的值
     if (j - i + 1 < min_size)
       min_size = j - i + 1;
   }

   return min_size;
   */
  int l = 0, r = -1, sum = 0; // nums[l...r]为滑动窗口
  int res = nums.size() + 1;
  while (l < nums.size()) {
    if (r + 1 < nums.size() && sum < s) {
      sum += nums[++r];
    } else {
      sum -= nums[l++];
    }
    if (sum >= s) {
      res = (r - l + 1) < res ? (r - l + 1) : res;
    }
  }
  return res == nums.size() + 1 ? 0 : res;
}
int main() {
  vector<int> nums = {6, 3, 2, 7, 5};
  cout << minSubArrayLen(11, nums) << endl;
  return 0;
}