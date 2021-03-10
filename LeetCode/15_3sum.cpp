#include "algorithm"
#include "iostream"
#include "vector"
using namespace std;
//方法一
vector<vector<int>> threeSum_way_one(vector<int> &nums) {
  vector<vector<int>> fin;
  int right = nums.size() - 1, left = 0, middle = 1, i = 0;
  while (right - left != 1) {
    if (middle - left == 1) {
      for (; middle < right; ++middle) {
        if ((nums[left] + nums[middle] + nums[right]) == 0) {
          // fin[i].push_back(nums[left]);
          // fin[i].push_back(nums[middle]);
          // fin[i].push_back(nums[right]);
          fin.push_back({nums[middle], nums[left], nums[right]});
          ++i;
        }
      }
      right = middle;
      middle -= 1;
    } else {
      for (; middle > left; --middle) {
        if ((nums[left] + nums[middle] + nums[right]) == 0) {
          // fin[i].push_back(nums[left]);
          // fin[i].push_back(nums[middle]);
          // fin[i].push_back(nums[right]);
          fin.push_back({nums[middle], nums[left], nums[right]});
          ++i;
        }
      }
      left = middle;
      middle += 1;
    }
  }
  return fin;
}
//方法二
vector<vector<int>> threeSum(vector<int> &nums) {
  vector<vector<int>> result;
  int length = nums.size();
  if (length > 2) {
    int left, right;
    sort(nums.begin(), nums.end());
    for (int i = 0; i < length - 2; ++i) {
      if (nums[i] > 0) {
        break;
      }
      if (i > 0) {
        if (nums[i] == nums[i - 1]) {
          continue;
        }
      }
      left = i + 1;
      right = nums.size() - 1;
      while (left < right) {
        if (nums[i] + nums[left] > 0) {
          break;
        } else {
          if (nums[i] + nums[left] + nums[right] == 0) {
            result.push_back({nums[i], nums[left], nums[right]});
            while ((left < right) && (nums[left] == nums[left + 1]))
              left++;
            while ((left < right) && (nums[right] == nums[right - 1]))
              right--;
            left++;
            right--;
          }
          if (nums[i] + nums[left] + nums[right] > 0) {
            right--;
          }
          if (nums[i] + nums[left] + nums[right] < 0) {
            left++;
          }
        }
      }
    }
  }
  return result;
}
int main(int argc, char const *argv[]) {
  vector<int> nums = {1, 2, -1, -2, -3, 0};
  /*
  for (vector<int> x : threeSum(nums)) {
    for (int c : x)
      cout << c;
    cout << endl;
  }
  */
  for (int c : nums)
    cout << c;
  cout << endl;
  return 0;
}
