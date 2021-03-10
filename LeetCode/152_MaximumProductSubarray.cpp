#include "climits"
#include "cmath"
#include "iostream"
#include "vector"
using namespace std;
int maxProduct(vector<int> &nums) {
  int dp_max = 1, dp_min = 0, ans = INT_MIN;
  for (int i = 0; i < nums.size(); ++i) {
    if (nums[i] < 0) {
      dp_max = max(nums[i], dp_max * nums[i]);
      ans = max(ans, dp_max);

    } else {
      dp_max = max(nums[i], dp_max * nums[i]);
      ans = max(ans, dp_max);
    }
  }
  return ans;
}
/*
思路：dynamic programming  dp[i]:以nums[i]结尾的最大乘积
                          dpFu[i]:以nums[i]结尾的最小乘积
                          currentMax:已经遍历过部分保留的最大值
    currentMax = max{currentMax,dp[i]}
*/
int maxProductI(vector<int> &nums) {
  long currentMax = INT_MIN, dp = 0, dpFu = 1;
  for (int i = 0; i < nums.size(); i++) {
    if (nums[i] >= 0) {
      dp = max((long)nums[i], dp * nums[i]);
      dpFu = nums[i] * dpFu;
    } else {
      long temp = dp;
      dp = max(nums[i] * dpFu, (long)nums[i]);
      dpFu = min(temp * nums[i], (long)nums[i]);
    }
    currentMax = max(currentMax, dp);
  }
  return (int)currentMax;
}
int maxProductII(int *nums, int numsSize) {
  int dpmax[numsSize];
  int dpmin[numsSize];
  dpmax[0] = dpmin[0] = nums[0];
  int ans = nums[0];
  for (int i = 1; i < numsSize; i++) {

    dpmax[i] =
        max(dpmax[i - 1] * nums[i], max(dpmin[i - 1] * nums[i], nums[i]));
    dpmin[i] =
        min(dpmax[i - 1] * nums[i], min(dpmin[i - 1] * nums[i], nums[i]));
    ans = max(ans, dpmax[i]);
  }
  return ans;
}