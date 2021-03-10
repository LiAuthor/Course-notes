#include "algorithm"
#include "bits/stdc++.h"
#include "climits"
#include "cstring"
#include "iostream"
#include "numeric"
#include "unordered_map"
#include "vector"
using namespace std;
/*
vector<int> nums = {1, 2, 4, 2, 6, 8};
cout << (7 + 1) % 7 << endl;
*/
/*
nums.begin() = nums.end() - 3;
nums.end() = nums.end() - 3 - 1;
cout << *nums.begin() << endl;
cout << *nums.end() << endl;
*/
/*
 for (int x = 0; x < 3; ++x)
   nums.push_back(nums[x]);
 nums.erase(nums.begin(), nums.begin() + 3);
 */
/*
reverse(nums.begin(), nums.begin() + 3);
for (auto i : nums)
  cout << i << endl;
*/
/*
bool run(int y) {
  if ((y % 4 == 0 && y % 100 != 0) || y % 400 == 0)
    return 1;
  return 0;
}
int main() {
  int Y, M, D, W, N;
  scanf("%4d%2d%2d%d%d", &Y, &M, &D, &W, &N);
  W = (W + N) % 7;
  if (W == 0)
    W = 7;
  int Month[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
  int Temp_M = 0, Original_M = M, Original_Y = Y;
  if (run(Y))
    Month[2] = 29;
  int Month_cha = Month[M] - D;
  if (N > Month_cha) {
    N -= Month_cha;
    ++M;
  }
  while ((N -= Month[M]) > Month[M]) {
    cout << "N=" << N << endl;
    ++M, ++Temp_M;
    if (M > 12) {
      M = 1;
      if (run(Y += 1))
        Month[2] = 29;
      else
        Month[2] = 28;
    }
  }
  cout << "M=" << M << " Temp_M=" << Temp_M << endl;
  M = (Temp_M + Original_M) % 12;
  Y = (Temp_M + Original_M) / 12 + Original_Y;
  // W = (W+N) % 7;//?????
  // cout << Y << M << N << " " << W << endl;
  printf("%d%02d%02d %d\n", Y, M, N, W);
  return 0;
}
*/
/*
int main() {
  //[[-1],[2,3],[1,-1,-3]] 预期-1
  vector<vector<int>> temp = {{1}, {2, 3}, {4, 5, 6}, {7, 8, 9, 10}};
  cout << temp[0][0] << endl;
  return 0;
}*/
int main() {
  /*
  vector<char> x = {'i', 'a', 'm', 'l'};
  vector<string> str = {"i", "am", "lijunkui"};
  cout << str[2].substr(2, 4) << endl;
  string s = "lijunkui";
  cout << s.substr(1, 2) << endl;
  string a = s.substr(1, 2);
  cout << a << endl;*/
  /*
  for (char x : a)
    cout << x;
  cout << endl;*/
  // vector<int> temp = {1, 2, 3, 4, 5, 6, 7, 8, 9};
  /*
  cout << "temp.begin():" << *temp.begin() << endl;
  cout << "temp.end():" << *(--temp.end()) << endl;
  cout << "temp.end():" << *temp.end() << endl;
  */
  /*
   cout << accumulate(temp.begin(), temp.begin() + 2, 0) << endl;
   cout << *(temp.begin() + 2) << endl;
   */
  // cout << 8 % 12 << endl;
  /*
    int m, n;
    cout << "请输入行和列：";
    cin >> m >> n;

    //注意下面这一行：vector <int后两个 "> "之间要有空格！否则会被认为是重载 ">
    >
    //"。
    vector<vector<int>> p(m, vector<int>(n));

    cout << "请输入数据：";
    for (int i = 0; i < m; i++)
      for (int j = 0; j < n; j++)
        cin >> p[i][j];

    cout << "输出数据：" << endl;
    for (int i = 0; i < m; i++) {
      for (int j = 0; j < n; j++)
        cout << p[i][j] << " ";
      cout << endl;
    }
  */
  /*
  vector<int> temp = {1, 2, 3, 5, 6, 8, 9};
  cout << *(temp.end() - 1) << endl;
  */
  /*
  string num = "1123508";

  cout << num.substr(1, 2) << endl; //从数组1位置开始包括1位置之后2个元素
  */
  vector<int> a = {1, 2, 3, 4, 5, 6, 7, 8, 9};
  vector<int> b;
  int c[12] = {1};
  // memset(c, 1, 12);
  /*
  vector<int>::iterator result = unique(a.begin(), a.begin());
  cout << *result << endl;
  */
  /*
  cout << *a.begin() << endl;
  cout << *(a.begin() + 4) << endl;
  rotate(a.begin(), a.begin() + 4, a.end());
  vector<int> b = {4, 5, 6};
  // swap(a, b);
  for (int i : a)
    cout << i << " ";
  cout << endl;
  */
  return 0;
}