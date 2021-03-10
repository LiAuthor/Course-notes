/*
任务调度器
https://leetcode-cn.com/problems/task-scheduler/
*/
#include "algorithm"
#include "iostream"
#include "unordered_map"
#include "vector"
using namespace std;
int leastInterval(vector<char> &tasks, int n) {
  unordered_map<char, int> mp;
  int count = 0;
  for (auto e : tasks) {
    mp[e]++;
    cout << e << " " << mp[e] << endl;
    count = max(count, mp[e]);
  }
  int ans = (count - 1) * (n + 1);
  for (auto e : mp)
    if (e.second == count)
      ans++;
  return max((int)tasks.size(), ans);
}
int main(int argc, char const *argv[]) {
  vector<char> tasks = {'A', 'C', 'A', 'A', 'A', 'B', 'B', 'B', 'C', 'C'};
  cout << leastInterval(tasks, 2) << endl;
  return 0;
}
