#include "algorithm"
#include "iostream"
#include "vector"
using namespace std;
int uniquePaths(int m, int n) {
  int dp[m][n];
  for (int i = 0; i < m; i++) {
    for (int j = 0; j < n; j++) {
      if (i == 0 || j == 0) {
        dp[i][j] = 1;
        continue;
      }
      dp[i][j] = dp[i - 1][j] + dp[i][j - 1];
      cout << "dp[" << i << "][" << j << "]= " << dp[i][j] << endl;
    }
  }
  return dp[m - 1][n - 1];
  /*
        int n_ = max(m, n) + min(m, n) - 2, k = min(m, n) - 1;
        if (k<n_/2) k = n_-k;
        long product = 1, product2 = 1;
        for(int i=k+1; i<=n_; i++) product *=i;
        for(int i=1; i<=n_-k; i++) product2 *=i;
        return product / product2;
  */
}
int main(int argc, char const *argv[]) {
  cout << uniquePaths(7, 3) <<  endl;
  /*
  vector<int> numbers = {0, 0, 3, 3, 4, 5, 2};
  cout << distance(numbers.begin(), numbers.end()) << endl;
  cout << numbers.end() - numbers.begin() << endl;
  */
  return 0;
}
