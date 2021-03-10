#include "algorithm"
#include "iostream"
#include "vector"
using namespace std;
vector<int> diStringMatch(string S) {
  int i = 0, N = S.size(), sentry = 1, temp = 0;
  vector<int> ans;
  for (int x = 0; x <= N; ++x)
    ans.push_back(x);
  if (sentry != 0) {
    sentry = 0;
    while (i < N) {
      if (S[i] == 'I' && ans[i] > ans[i + 1]) {
        // exchange(ans[i], ans[i + 1]);
        temp = ans[i + 1];
        ans[i + 1] = ans[i];
        ans[i] = temp;
        ++sentry;
      } else if (S[i] == 'D' && ans[i] < ans[i + 1]) {
        // exchange(ans[i], ans[i + 1]);
        temp = ans[i + 1];
        ans[i + 1] = ans[i];
        ans[i] = temp;
        ++sentry;
      }
      ++i;
    }
    i = 0;
  }
  return ans;
}
int main() {
  string S = "DDI";
  vector<int> res = diStringMatch(S);
  int n = res.size();
  for (int x = 0; x < n; ++x)
    // vector<int> iterator::it = diStringMatch(S);
    cout << res[x] << endl;
  return 0;
}