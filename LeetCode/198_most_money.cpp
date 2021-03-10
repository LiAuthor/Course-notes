#include "algorithm"
#include "iostream"
#include "vector"
using namespace std;
int rob(vector<int> &nums) {
  /*
  int result1 = 0, result2 = 0, length = nums.size();
  for (int jishu = 0; jishu < length; jishu += 2)
    result1 += nums[jishu];
  for (int oushu = 1; oushu < length; oushu += 2)
    result2 += nums[oushu];
  return result1 > result2 ? result1 : result2;
  */
  if (nums.size() <= 1)
    return nums.empty() ? 0 : nums[0];
  vector<int> dp = {nums[0], max(nums[0], nums[1])};
  for (int i = 2; i < nums.size(); ++i) {
    dp.push_back(max(nums[i] + dp[i - 2], dp[i - 1]));
  }
  return dp.back();
}
int main() {
  vector<int> nums = {2, 1, 1, 2, 2, 1, 1, 2};
  cout << rob(nums) << endl;
  return 0;
}
