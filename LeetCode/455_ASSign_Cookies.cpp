#include "algorithm"
#include "iostream"
#include "vector"
using namespace std;
int findContentChildren(vector<int> &g, vector<int> &s) {
  sort(g.begin(), g.end());
  sort(s.begin(), s.end());
  int ans = 0, y = 0;
  for (int x = 0; x < g.size(); ++x) {
    for (; y < s.size(); ++y) {
      if (s[y] >= g[x]) {
        ++ans, ++y; //++y是因为break之后将不再执行for(;;++y)
        break;
      }
    }
  }
  return ans;
}
int main() {
  vector<int> g = {1, 2, 3}, s = {1, 4};
  cout << findContentChildren(g, s) << endl;
  return 0;
}