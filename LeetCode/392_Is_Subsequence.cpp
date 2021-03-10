#include "algorithm"
#include "iostream"
#include "vector"
using namespace std;
bool isSubsequence(string s, string t) {
  int ans = 0, x = 0;
  int s_len = s.length(), t_len = t.length();
  for (int i = 0; i < s_len; ++i)
    for (; x < t_len; ++x) {
      if (s[i] == t[x]) {
        ++ans, ++x;
        break;
      }
    }
  return s_len == ans ? true : false;
}
bool isSubsequenceI(string s, string t) {
  int ans = 0;
  return ans == s.length() ? true : false;
}
int main() {
  string s = "axc";
  string t = "ahbgdc";
  cout << isSubsequence(s, t) << endl;
  return 0;
}