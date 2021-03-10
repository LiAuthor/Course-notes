#include "algorithm"
#include "iostream"
#include "vector"
using namespace std;
/*
unique函数是我们最常用的形式。其中这两个参数表示对容器中[it_1，it_2)范围的元素进行去重(注：区间是前闭后开，即不包含it_2所指的元素),
返回值是一个迭代器，它指向的是去重后容器中不重复序列的最后一个元素的下一个元素。
*/
int removeDuplicates(vector<int> &nums) {
  int dup = 0;
  // unique的作用是将容器中相邻元素的重复元素至尾
  vector<int>::iterator it = unique(nums.begin(), nums.end());
  dup = it - nums.begin();
  cout << "it=" << *it << endl;
  nums.erase(it, nums.end()); //删除  从it位置开始到end结束
  return dup;
}
int main() {
  vector<int> num = {1, 1, 1, 2, 2, 3, 4, 5, 5};
  string str = "that is a test";
  // cout << removeDuplicates(num) << endl;
  str.erase(2, 3);
  for (auto i : str) {
    cout << i << endl;
  }
}
/*
C++ unique函数功能和返回值的理解
https://www.jianshu.com/p/c5e77cde1efd
*/
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int ans;
        //方法一：有序数组中踢重至末尾，然后删除末尾重复元素
        //nums.erase(unique(nums.begin(),nums.end()),nums.end());
        //方法二：有序数组中踢重至末尾，取！(末尾)元素，即前半部分元素
        nums.resize(distance(nums.begin(),unique(nums.begin(),nums.end())));
        ans=nums.size();
        return ans;
    }
};