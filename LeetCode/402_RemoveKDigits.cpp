#include "algorithm"
#include "iostream"
#include "stack"
#include "vector"
using namespace std;
string removeKdigits(string num, int k) {
  stack<char> s;
  int count = k;
  for (char c : num) {
    while (!s.empty() && s.top() > c && count) {
      s.pop();
      count--;
    }
    s.push(c);
  } // for循环将依照权重,若万位大于千位则删除万位,依次向下
  int size = (int)s.size();
  string answer(size, '0'); //字符串的这种构造方法值得注意
  for (int i = size - 1; i >= 0; i--) {
    answer[i] = s.top();
    s.pop();
  } //将栈中元素取出放入answer
  int cursor = 0, keep = num.length() - k;
  // cursor存放前置0的个数
  while (cursor < keep && answer[cursor] == '0') {
    cursor++;
  }
  return cursor == keep ? "0" : answer.substr(cursor, keep - cursor);
}
string removeKdigitsI(string num, int k) {
  stack<char> s;
  int count = k;
  for (auto i : num) {
    while (!s.empty() && s.top() > i && count) {
      s.pop();
      --count;
    }
    s.push(i);
  }
  string answer(s.size(), '0');
  for (int i = s.size() - 1; i >= 0; --i) {
    answer[i] = s.top();
    s.pop();
  }
  int cursor = 0, len = num.length() - k;
  while (cursor < len && answer[cursor] == 0)
    cursor++;
  return cursor == len ? "0" : answer.substr(cursor, len - cursor);
}
int main() {
  string num = "1432219";
  cout << removeKdigitsI(num, 3) << endl;
  return 0;
}