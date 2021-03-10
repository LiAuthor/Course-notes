#include "iostream"
#include "vector"
using namespace std;
vector<vector<int>> generate(int numRows) {
  vector<vector<int>> ans(numRows);
  if (numRows == 0)
    return ans;
  for (int i = 0; i < numRows; ++i) {
    for (int j = 0; j < i; ++j) {
      if (j == 0 || i == j)
        ans[i].push_back(1);
      else
        ans[i].push_back(ans[i - 1][j - 1] + ans[i - 1][j]);
    }
  }
  return ans;
}
int main() {
  int numRows = 5;
  for (vector<int> temp : generate(numRows)) {
    for (int T : temp)
      cout << T << " ";
    cout << endl;
  }
  return 0;
}