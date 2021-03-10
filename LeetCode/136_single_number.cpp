#include "algorithm"
#include "iostream"
#include "numeric"
#include "vector"
using namespace std;
int singleNumber(vector<int> &nums) {
  return accumulate(nums.begin(), nums.end(), 0, bit_xor<>());
}
/*
int SingleNumber(hash<int> &nums) {
  int result;
  for (int i = 0; i < nums.size(); i++) {
  }
  return result;
}
*/
int main() {
  vector<int> nums = {1, 1, 2, 2, 2, 3, 6, 3, 4, 5, 4, 5, 6, 7, 6};
  singleNumber(nums);
  return 0;
}