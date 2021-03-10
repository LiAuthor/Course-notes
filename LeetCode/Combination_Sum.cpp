#include "iostream"
#include "string"
#include "vector"
using namespace std;
/*
void dfs(vector &v, int start, int k, vector &path, int target) {
  if (path.size() > k || target < 0)
    return;
  else if (0 == target && k == path.size())
    ret.push_back(path);
  else {
    for (int i = start; i < v.size(); ++i) {
      path.push_back(v[i]);
      dfs(v, i + 1, k, path, target - v[i]);
      path.pop_back();
    }
  }
  int main(int argc, char const *argv[]) {
    vector<vector<int>> sums={1,2,3,4,5,6,7,8,9};
    vector<int> path;
    dfs(sums,0,)
    return 0;
  }
*/
class Solution {
public:
  vector<vector<int>> combinationSum3(int k, int n) {
    vector<vector<int>> res;
    vector<int> cur;
    // unordered_set<string> hash;
    gen(res, cur, n, k, 0);
    return res;
  }
  void gen(vector<vector<int>> &res, vector<int> &cur, int n, int k, int pos) {
    if (n == 0 && k == 0) {
      res.emplace_back(vector<int>(cur));
      return;
    }
    if (n < 0 || k < 0 || pos == 10)
      return;
    for (int i = pos; i < 9; ++i) {
      int idx = i + 1;
      cur.emplace_back(idx);
      gen(res, cur, n - idx, k - 1, i + 1);
      cur.pop_back();
    }
  }
};