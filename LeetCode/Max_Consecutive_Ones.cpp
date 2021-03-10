#include "algorithm"
#include "iostream"
#include "vector"
using namespace std;
int Find(vector<int> &nums) {
  int max = 0, tmp = 0;
  for (int i = 0; i < nums.size(); ++i) {
    while (nums[i] == 1) {
      ++tmp;
      ++i;
    }
    if (tmp > max) {
      max = tmp;
      tmp = 0;
    }
  }
  return max;
}
int main(int argc, char const *argv[]) {
  vector<int> nums = {0, 1, 1, 1, 1, 0, 1, 1, 1, 1, 1, 1, 0, 1, 0};
  cout << Find(nums) << endl;
  return 0;
}
