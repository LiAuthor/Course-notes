#include "iostream"
#include "vector"
using namespace std;
//该算法得出一维整型向量数组中哪些元素同时大于其相邻左值与右值
int main(int argc, char const *argv[]) {
  vector<int> nums(4);
  int counter = 0;
  nums = {1, 2, 3, 1};
  for (int n = 1; n < nums.size() - 1; n++) {
    if (nums[n] > nums[n - 1] && nums[n] > nums[n + 1]) {
      if (counter > 0) {
        cout << "or"
             << " ";
      }
      cout << n << " ";
      ++counter;
    }
  }
  cout << endl;
  return 0;
}
