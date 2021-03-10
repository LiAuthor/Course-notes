#include "iostream"
#include "stack"
using namespace std;
/*
//解法一存在思维漏洞 无法解决***(((的最终结果
bool checkValidString(string s) {
  stack<char> asterisk;
  stack<char> parentheses;
  for (int i = 0; i < s.size(); ++i) {
    if (s[i] == '(')
      parentheses.push(s[i]);
    else if (s[i] == '*')
      asterisk.push(s[i]);
    else {
      if (parentheses.size() != 0)
        parentheses.pop();
      else if (asterisk.size() != 0)
        asterisk.pop();
      else
        return false;
    }
  }
  if (parentheses.size() == 0 && asterisk.size() >= 0)
    return true;
  else if (parentheses.size() <= asterisk.size())
    return true;
  else
    return false;
}*/
bool checkValidString(string s) {
  int used = 0, unused = 0;
  int left = 0;

  for (auto c : s) {
    if (c == ')') {
      if (left) {
        left--;
      } else if (used) {
        used--;
        unused++;
      } else if (unused) {
        unused--;
      } else {
        return false;
      }
    } else if (c == '*') {
      if (left) {
        used++;
        left--;
      } else {
        unused++;
      }
    } else {
      left++;
    }
  }
  return (left == 0);
}
int main(int argc, char const *argv[]) {
  string s = {'(', '*', '(', ')'};
  if (checkValidString(s))
    cout << "True" << endl;
  else
    cout << "False" << endl;
  return 0;
}