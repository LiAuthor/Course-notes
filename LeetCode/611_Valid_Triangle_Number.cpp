#include "algorithm"
#include "iostream"
#include "vector"
using namespace std;
/*
int Triangle(vector<int> &nums) {
  sort(nums.begin(), nums.end());
  int count = 0, p_right = 0, p_middle = 1, p_lift = nums.size() - 1;
  while (p_lift - p_right != 2) {
    if (p_middle - p_right == 1) {
      while (p_middle < p_lift) {
        if (nums[p_right] + nums[p_middle] > nums[p_lift] &&
            nums[p_middle] - nums[p_right] < nums[p_lift])
          ++count;
        ++p_middle;
        cout << "middle=" << p_middle << endl;
      }
      p_middle -= 2;
      p_lift -= 1;
    }
    if (p_lift - p_middle == 1) {
      while (p_middle > p_right) {
        if (nums[p_right] + nums[p_middle] > nums[p_lift] &&
            nums[p_middle] - nums[p_right] < nums[p_lift])
          ++count;
        --p_middle;
      }
      // cout << "middle=" << p_middle << endl;
      p_middle += 2;
      p_right += 1;
    }
  }
  cout << "count=" << count << endl;
  return count;
}*/
int Triangle(vector<int> &nums) {
  sort(nums.begin(), nums.end());
  int n = nums.size();
  int count = 0;
  int i = 0;
  while (i < n - 2 && nums[i] == 0)
    i++;
  for (int k = n - 1; k > 1; k--) {
    int r = k - 1;
    int l = i;
    /*有序排列中，只需满足两小边之和大于第三边即可*/
    while (l < r) {
      while (l < r && nums[l] + nums[r] <= nums[k])
        l++;
      count += r - l;
      cout << "count=" << count << endl;
      r--;
    }
  }
  return count;
}
int main(int argc, char const *argv[]) {
  vector<int> nums = {2, 2, 3, 3, 4, 4, 5};
  cout << Triangle(nums) << endl;
  return 0;
}
