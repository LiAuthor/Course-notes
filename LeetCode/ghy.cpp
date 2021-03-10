/*
#include "iostream"
#include "vector"
using namespace std;
int judge(vector<int> &ans) {
  cout << ans.size() << endl;
  return 0;
}
int main() {
  vector<int> ans = {12, 3, 4, 5, 67, 8};
  judge(ans);
  return 0;
}
*/
#include "iostream"
#include "vector"
using namespace std;
int maxProfit(vector<int> &nums) {
  int i, j, L;
  int max = 0;
  L = nums.size();
  printf("%d", L);
  for (i = 0; i < L; i++) {
    for (j = 0; j < L; j++) {
      if (j > i && nums[j] > nums[i]) {
        if (nums[j] - nums[i] > max) {
          max = nums[j] - nums[i];
        }
      }
    }
  }
  return max;
}
int main() {
  vector<int> num = {7, 1, 5, 3, 6, 4};
  // int a = maxProfit(num);
  // printf("最大利润:%d\n", a);
  int nums[] = {11, 22, 33, 44, 55, 66};
  int i;
  // sizeof(nums) 计算nums数组的总字节数
  // sizeof(int) 计算int类型所占用的字节数
  int length = sizeof(nums) / sizeof(int);
  cout << length << endl;
  return 0;
}