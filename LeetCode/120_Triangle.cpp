#include "algorithm"
#include "iostream"
#include "vector"
using namespace std;
int minimumTotal(vector<vector<int>> &triangle) {
  /*
  int ans=triangle[0][0],min_num=0,row=0;
  for(int i=1;i<triangle.size();++i){
    min_num=min(triangle[i][row],triangle[i][row+1]);
    ans+=min_num;
    if(triangle[i][row+1]==min_num) row+=1;
  }
  return ans;
  */
  for (int i = triangle.size() - 2; i >= 0; i--)
    for (int j = 0; j < triangle[i].size(); j++)
      triangle[i][j] += min(triangle[i + 1][j], triangle[i + 1][j + 1]);
  return triangle[0][0];
}
int main(int argc, char const *argv[]) {
  /*
    vector<vector<int>> triangle(4, vector<int>(5));
    int n = triangle.size();
    cout << n << endl;
    vector<int> dp(n + 1, 0);
  */
  vector<vector<int>> triangle(4, vector<int>(4));
  triangle[0] = {2};
  triangle[1] = {3, 4};
  triangle[2] = {6, 5, 7};
  triangle[3] = {4, 1, 8, 3};
  vector<vector<int>> temp = {{1, 2}, {1, 2, 3}, {1, 2, 3, 4}};
  cout << minimumTotal(triangle) << endl;
  /*
  int n = triangle.size(), sum = 0, num = 0, min_num = 100;
  for (int i = n - 1; i > 0; i--) {
    for (int j = 0; j < i; j++) {
      num = min(triangle[i][j], triangle[i][j + 1]);
      if (num <= min_num) {
        min_num = num;
      }
    }
    cout << "min_num=" << min_num << endl;
    sum += min_num;
    min_num = 100;
  }
  sum += triangle[0][0];
  return sum;
  */
  /*
   int n = triangle.size(), sum = 0;
   cout<<n<<endl;
   for (int i = n - 1; i >= 0; i--) {
     sort(triangle[i].begin(), triangle[i].end());
     cout << triangle[i][0] << endl;
     sum += triangle[i][0];
   }
   */
  return 0;
}
