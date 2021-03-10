#include "algorithm"
#include "iostream"
#include "vector"

using namespace std;
int FindMax(vector<int> &nums, int arr, int K) {
  int temp = 0, origin_arr = arr;
  for (int i = 0; i < K; ++i)
    temp = max(nums[++arr], temp);
  for (int i = 0; i < K; ++i) {
    if (nums[arr] == temp)
      break;
    --arr;
  }
  return arr;
}
bool canJump(vector<int> &nums) {
  /*
int i = 0;
bool ans = false;
while (i < nums.size() && ans == false) {
  if (nums.size() - i - 1 > nums[i]) {
    if (nums[i] == 0)
      break;
    else
      i = FindMax(nums, i, nums[i]);
  } else
    ans = true;
}
return ans;
*/
  //方法二  动态规划
  /*
    vector<int> dp(nums.size(), 0);
    for (int i = 1; i < nums.size(); ++i) {
      dp[i] = max(dp[i - 1], nums[i - 1]) - 1;
      if (dp[i] < 0)
        return false;
    }
    return true;
    */
  //方法三 贪婪算法
  int n = nums.size(), reach = 0;
  for (int i = 0; i < n; ++i) {
    if (i > reach || reach >= n - 1)
      break;
    reach = max(reach, i + nums[i]);
  }
  return reach >= n - 1;
}
int main() {
  vector<int> nums = {5, 9, 3, 2, 1, 0, 2, 3, 3, 1, 0, 0};
  // vector<int> nums = {2, 3, 1, 1, 4};
  // vector<int> nums = {3, 2, 1, 0, 4};
  // cout << FindMax(nums, 1, 2) << endl;
  cout << canJump(nums) << endl;
  return 0;
}