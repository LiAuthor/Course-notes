#include "algorithm"
#include "climits"
#include "iostream"
#include "vector"
using namespace std;
int findRadius(vector<int> &houses, vector<int> &heaters) {
  //最小加热半径取决于相距最远的两个供暖器的位置的距离
  int max_jiange = heaters[0] - 0, ans = 0, temp_jiange = 0;
  for (int i = 1; i < heaters.size(); ++i) {
    temp_jiange = heaters[i] - heaters[i - 1];
    if (temp_jiange > max_jiange)
      max_jiange = temp_jiange;
  }
  //若是最后一个供暖器位置不在最后的房屋的位置上
  temp_jiange = heaters[houses.size() - 1] - heaters[heaters.size() - 1];
  if (temp_jiange > max_jiange)
    max_jiange = temp_jiange;
  if (max_jiange % 2 != 0)
    ans = (max_jiange - 1) / 2;
  else
    ans = max_jiange / 2;
  return ans;
}
int findRadiusI(vector<int> &houses, vector<int> &heaters) {
  sort(heaters.begin(), heaters.end());
  int ans = 0;
  //思路：
  //对于每座房子，有前后两个供暖器(只有一个供暖器的情况另外判断)，寻找它们之间的较小距离，并与当前最大半径比较更新即可
  for (int i = 0; i < houses.size(); i++) {
    int cur = INT_MAX;
    // lower_bound 返回第一个大于等于这个元素的迭代器
    //此时larger就是这座房子右边的供暖器
    //使用*larger来取值,或者heaters[larger-heaters.begin()]
    auto larger = lower_bound(heaters.begin(), heaters.end(), houses[i]);
    if (larger != heaters.end()) {
      //如果存在的话 那么就计算它们之间的距离
      cur = *larger - houses[i];
    }
    //如果这个元素没有小于最开始的元素 那么意味着它左边也有一个供暖器
    if (larger != heaters.begin()) {
      //左边供暖器的位置就是当前larger位置-1
      auto smaller = larger - 1;
      //使用*smaller来取得这个值,更新它们之间的较小值
      cur = min(cur, houses[i] - *smaller);
    }
    ans = max(cur, ans);
  }
  return ans;
}
int main() {
  vector<int> houses = {1, 2, 3, 4, 5, 6, 7, 8, 9};
  vector<int> heaters = {2, 5, 9};
  cout << findRadius(houses, heaters) << endl;
  return 0;
}