#include "algorithm"
#include "iostream"
#include "unordered_map"
#include "vector"
using namespace std;
//该算法实现得出一维整型向量数组元素中出现两次的元素
vector<int> findDuplicates(vector<int> &nums) {
  unordered_map<int, int> table;
  vector<int> ans;
  for (int i = 0; i < nums.size(); i++)
    table[nums[i]]++;             //统计各元素出现的次数
  sort(nums.begin(), nums.end()); // sort()排序是删除重复元素的前提
  nums.erase(unique(nums.begin(), nums.end()), nums.end());
  // unique()并不是把重复的元素删除，而是全部放置数组的后面,返回的是去重后的尾地址,earse()用来删除
  for (int i = 0; i < table.size(); ++i) {
    if (table[nums[i]] == 2)
      ans.push_back(nums[i]);
  }
  return ans;
}
int main(int argc, char const *argv[]) {
  vector<int> nums = {1, 1, 1, 2, 4, 5, 4, 3, 8, 6, 7, 7, 8, 3};
  for (int x : findDuplicates(nums))
    cout << x << " ";
  cout << endl;
  return 0;
}
