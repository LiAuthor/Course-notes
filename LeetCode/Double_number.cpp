#include "algorithm"
#include "iostream"
#include "vector"
using namespace std;
int dominantIndex(vector<int> &nums) {
  /*
vector<int> copy = nums;
sort(nums.begin(), nums.end());
// for (int i : copy)
// cout << i << endl;
int max_num = *(nums.end() - 1);
int sec_num = *(nums.end() - 2);
vector<int>::iterator point = copy.begin();
if ((sec_num == 0 && max_num != 0) && ((max_num / sec_num) >= 2))
  while (point != copy.end()) {
    if (*point == max_num)
      // return distance(copy.begin(), point);
      ++point;
  }
else
  return -1;
  */
  int size = nums.size();
  if (size < 2)
    return 0;
  vector<int> nums0 = nums;
  sort(nums0.begin(), nums0.end());
  int big = nums0[size - 1];
  int small = nums0[size - 2];
  if (big < small * 2) //当正面入口条件过多,可以取其反面即补集
    return -1;
  else
    for (int i = 0; i < size; i++)
      if (nums[i] == big)
        return i;
  return 0;
}
int main(int argc, char const *argv[]) {
  vector<int> nums = {1, 2, 3, 4, 6, 3, 2, 6};
  cout << dominantIndex(nums) << endl;
  return 0;
}
