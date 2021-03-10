#include "climits"
#include "iostream"
#include "vector"
using namespace std;
int maxSubArray(vector<int> &nums) {
  if (nums.size() == 0)
    return 0;
  int res = INT_MIN;
  int f_n = -1;
  for (int i = 0; i < nums.size(); ++i) {
    f_n = max(nums[i], f_n + nums[i]);
    res = max(f_n, res);
  }
  return res;
}
int main() {
  vector<int> num = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
  cout << maxSubArray(num) << endl;
  return 0;
}