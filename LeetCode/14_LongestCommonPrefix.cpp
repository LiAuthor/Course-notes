#include "iostream"
#include "vector"
using namespace std;
string FindQZ(vector<string> &str) {
  int result = 0;
  for (; result < str[0].size(); ++result) {
    char checker = str[0][result];
    for (int i = 1; i < str.size(); ++i) {
      if (checker != str[i][result]) {
        // cout << "result=" << result << endl;
        return str[0].substr(0, result);
      }
    }
  }
  // cout << "result=" << result << endl;
  return str[0].substr(0, result);
}
int main() {
  vector<string> str = {"lishuai", "lijunkui", "li"};
  // cout << "str[0][0]" << str[0][0] << endl;
  // cout << "str[0]" << str[1] << endl;
  cout << str[0].substr(1, 3) << endl;
  cout << FindQZ(str) << endl;
  return 0;
}

/*
string longestCommonPrefix(vector<string> &strs) {

  // safety
  if (strs.empty())
    return "";
  auto first_str = strs[0];
  int col = 0;
  for (; col < first_str.size(); ++col) {
    char checker = first_str[col];
    for (int row = 1; row < strs.size(); ++row) {
      if (strs[row][col] != checker) {
        return first_str.substr(0, col);
      }
    }
  }

  return first_str.substr(0, col);
}
*/