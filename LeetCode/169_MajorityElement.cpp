#include "algorithm"
#include "iostream"
#include "unordered_map"
#include "vector"
using namespace std;
int majorityElement(vector<int> &nums) {
  int half = nums.size() / 2;
  int ans = 0;
  unordered_map<int, int> table;
  for (int i = 0; i < nums.size(); i++)
    table[nums[i]]++;
  /*
  //第一种访问结果的方式 排序删除保留不重复的key 以此通过key访问value
  //SB才这么做
  sort(nums.begin(), nums.end()); // sort()排序是删除重复元素的前提
  nums.erase(unique(nums.begin(), nums.end()), nums.end());
  for (int i = 0; i < table.size(); ++i) {
    if (table[nums[i]] > half){
      ans = nums[i];
    }
  }
  */

  //第二种 定义迭代指针it遍历table 其中it->first is key, it->second is value
  //缓和了好多
  unordered_map<int, int>::iterator it;
  for (it = table.begin(); it != table.end(); ++it) {
    // cout << it->first << " : " << it->second << endl;
    if ((it->second) > half) {
      ans = it->first;
      break;
    }
  }
  return ans;
}
int main() {
  vector<int> nums = {2, 2, 1, 1, 1, 2, 2};
  cout << majorityElement(nums) << endl;
  return 0;
}