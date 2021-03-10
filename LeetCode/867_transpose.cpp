#include "iostream"
#include "vector"
using namespace std;
/*
vector<vector<int>> transpose(vector<vector<int>> &A) {
  vector<vector<int>> ans;
  return ans;
}
*/
vector<vector<int>> transpose(vector<vector<int>> &A) {
  if (A.empty())
    return A;
  int rows = A.size(), cols = A[0].size();
  //可以先定义一维数组
  vector<int> temp(rows, 0);
  vector<vector<int>> res(cols, temp);
  for (int i = 0; i < rows; i++)
    for (int j = 0; j < cols; j++)
      res[j][i] = A[i][j];
  return res;
}

int main() {
  // vector<vector<int>>的初始化问题:必须知道行（row）的大小
  vector<vector<int>> temp = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
  vector<vector<int>> ans = {{0, 0, 0}, {0, 0, 0}, {0, 0, 0}};
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      ans[j][i] = temp[i][j];
    }
  }
  cout << ans[0][2] << " " << ans[2][0] << endl;
  // cout << temp[0][2] << " " << temp[2][0] << endl;
  return 0;
}