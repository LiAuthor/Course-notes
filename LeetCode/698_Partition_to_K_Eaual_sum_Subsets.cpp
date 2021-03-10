#include "algorithm"
#include "iostream"
#include "vector"
using namespace std;
bool res = false;
void BT(vector<int> &ns, int lim, int pos, vector<int> buckets) {
  if (res)
    return; // stop immediately
  if (pos >= ns.size()) {
    res = true;
    return;
  }
  bool flag = false;
  for (int i = 0; i < buckets.size(); i++) {
    if (flag && buckets[i] == 0)
      continue; // pruning, avoid putting an element into empty buckets
                // repeatedly
    if (buckets[i] == 0)
      flag = true;
    if (buckets[i] + ns[pos] > lim)
      continue;
    buckets[i] += ns[pos];
    BT(ns, lim, pos + 1, buckets);
    buckets[i] -= ns[pos];
  }
}
bool canPartitionKSubsets(vector<int> &nums, int k) {
  sort(nums.begin(), nums.end());
  reverse(nums.begin(), nums.end());
  int sum = 0;
  for (int i = 0; i < nums.size(); i++)
    sum += nums[i];
  if (sum % k != 0)
    return false;
  vector<int> bs(k, 0);
  BT(nums, sum / k, 0, bs);
  return res;
}
