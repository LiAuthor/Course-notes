#include "bits/stdc++.h"
using namespace std;
void rotate(vector<vector<int>> &matrix) {
  int matrix_size = matrix.size();
  // 先上下翻转
  for (int i = 0; i < matrix_size / 2; i++)
    matrix[i].swap(matrix[matrix_size - 1 - i]);
  // 在对角线翻转
  for (int i = 0; i < matrix_size; i++) {
    for (int j = i; j < matrix_size; j++)
      swap(matrix[i][j], matrix[j][i]);
  }

  // 测试输出
  for (vector<int> test : matrix) {
    for (auto x : test)
      cout << x << " ";
    cout << endl;
  }
}
int main() {
  vector<vector<int>> temp = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
  rotate(temp);
  return 0;
}