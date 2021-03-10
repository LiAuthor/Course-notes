#include "algorithm"
#include "iostream"
#include "string"
using namespace std;
int main() {
  // string str = "Let's take LeetCode contest";
  string str = "LeetCode";
  string temp = "";
  int t = 0;
  for (int i = 0; i < str.length(); ++i) {
    while (str[i++] != ' ') {
      // reverse()
      // temp[t++] = str[i++];
    }
    // reverse(str.begin(), temp.end());
  }

  cout << str << endl;
  return 0;
}
