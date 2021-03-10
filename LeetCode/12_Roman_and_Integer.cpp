/*
整数与罗马数字转换
本题链接:https://leetcode-cn.com/problems/integer-to-roman/
*/
#include "iostream"
#include "string"
#include "unordered_map"
#include "vector"
using namespace std;

int romanToInt(string s) {
  unordered_map<char, int> T = {{'I', 1},   {'V', 5},   {'X', 10},  {'L', 50},
                                {'C', 100}, {'D', 500}, {'M', 1000}};
  int sum = T[s.back()]; //无向图最后一个元素的值
  for (int i = s.length() - 2; i >= 0; --i) {
    if (T[s[i]] < T[s[i + 1]]) //当左边元素的值小于右边元素的值 必然是相减的关系
      sum -= T[s[i]];
    else
      sum += T[s[i]];
    // cout << sum << endl;
  }
  return sum;
}

//解法一
string InttoRoman2(int num) {
  string res = "";
  vector<int> val{1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
  vector<string> str{"M",  "CM", "D",  "CD", "C",  "XC", "L",
                     "XL", "X",  "IX", "V",  "IV", "I"};
  for (int i = 0; i < val.size(); ++i) {
    while (num >= val[i]) { //确定num在哪一个阶段
      num -= val[i];        //向下一个较小阶段接近
      res += str[i];        //叠加相对应的字符
      // cout << res << endl;
    }
  }
  return res;
}

//解法二
string InttoRoman(int num) {
  string res = "";
  char roman[] = {'M', 'D', 'C', 'L', 'X', 'V', 'I'};
  int value[] = {1000, 500, 100, 50, 10, 5, 1};
  // 7表示最大为4位数,n=+2表示从个位十位百位开始计算
  for (int n = 0; n < 7; n += 2) {
    int x = num / value[n];
    if (x < 4) {
      for (int i = 1; i <= x; ++i)
        res += roman[n];
    } else if (x == 4)
      res = res + roman[n] + roman[n - 1];
    else if (x > 4 && x < 9) {
      res += roman[n - 1];
      for (int i = 6; i <= x; ++i)
        res += roman[n];
    } else if (x == 9)
      res = res + roman[n] + roman[n - 2];
    num %= value[n];
  }
  return res;
}
int main(int argc, char const *argv[]) {
  string test1 = "MCMXCIV";
  string test2 = "LVIII";
  cout << romanToInt(test1) << endl;
  // cout << romanToInt(test2) << endl;
  int number1 = 1994;
  cout << InttoRoman2(number1) << endl;
  return 0;
}
