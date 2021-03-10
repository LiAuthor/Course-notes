#include "iostream"
#include "vector"
#include <algorithm>
using namespace std;
void merge(vector<int> &nums1, int m, vector<int> &nums2, int n) {
  /*
int i = 0, length = nums2.size();
while (i < length) {
  nums1.push_back(nums2[i]);
  cout << "nums2[" << i << "]=" << nums2[i] << endl;
  ++i;
}
sort(nums1.begin(), nums1.end());
for (auto i : nums1)
  cout << i << " ";
cout << endl;
//
remove()将[v.first,v.last)中不等于Value的元素copy到迭代器从first开始的[v.first,v.result)的位置
//返回值迭代器result是最后一个不等于Value的迭代器,v的大小不发生变化
auto it = remove(nums1.begin(), nums1.end(), 0);
nums1.erase(it, nums1.end());
*/
  int num[m + n]; //新建一个数组，对nums1和nums2排序，排完序赋值给nums1
  int i = 0, j = 0, k = 0;
  while (i < m && j < n) {
    if (nums1[i] <= nums2[j])
      num[k++] = nums1[i++];
    else
      num[k++] = nums2[j++];
  }
  while (i < m)
    num[k++] = nums1[i++];
  while (j < n)
    num[k++] = nums2[j++];
  copy(num, num + m + n, nums1.begin());
}
int main() {
  vector<int> nums1 = {1, 0, 0, 2, 0, 3, 0, 0, 0}, nums2 = {2, 5, 6};
  // merge(nums1, 3, nums2, 3);
  auto x = remove(nums1.begin(), nums1.end(), 0);
  for (auto i : nums1)
    cout << i << " ";
  cout << endl;
  return 0;
}
