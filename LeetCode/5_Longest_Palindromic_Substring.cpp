#include "algorithm"
#include "iostream"
#include "string"
#include "vector"
using namespace std;
/*
string longestPalindrome(string s) {
  if (s.size() == 0)
    return s;
  else {
    int temp = 0, max = 0, ans = 0;
    for (int i = 0; i < s.size() - 1; ++i) {
      temp = i + 1;
      for (; temp < s.size(); ++temp) {
        if (s[i] == s[temp]) {
          if (temp - i >= max) {
            max = temp - i;
            ans = i;
          }
          break;
        }
      }
    }
    return s.substr(ans, max + 1);
  }
}*/
string longestPalindrome(string s) {
  if (s.size() < 2)
    return s;
  int max_len = 0;
  int start_idx = 0;
  int i = 0;
  while (i < s.size()) {
    int r_ptr = i;
    int l_ptr = i;
    // 找到回文的中间
    while (r_ptr < s.size() - 1 && s[r_ptr] == s[r_ptr + 1])
      r_ptr++;
    i = r_ptr + 1;
    // 从中间向外展开
    while (r_ptr < s.size() - 1 && l_ptr > 0 && s[r_ptr + 1] == s[l_ptr - 1]) {
      r_ptr++;
      l_ptr--;
    }
    int new_len = r_ptr - l_ptr + 1;
    if (new_len > max_len) {
      start_idx = l_ptr;
      max_len = new_len;
    }
  }
  return s.substr(start_idx, max_len);
}
string longestPalindromeI(string s) {
  if (s.size() < 2)
    return s;
  int left = 0, right = 0, max = 0, ans = 0;
  for (int i = 1; i < s.size(); ++i) {
    left = i - 1, right = i + 1;
    while (s[left] == s[right] && left >= 0 && right < s.size()) {
      --left, ++right;
    }
    if (right - left >= max) {
      max = right - left;
      ans = left;
    }
  }
  return s.substr(ans, max + 1);
}
int main() {
  string s = "babad";
  // cout << s.substr(1, 3) << endl;
  cout << longestPalindrome(s) << endl;
  return 0;
}