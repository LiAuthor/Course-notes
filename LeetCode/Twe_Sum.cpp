#include "algorithm"
#include "iostream"
#include "vector"
using namespace std;
int main(int argc, char const *argv[]) {
  vector<int> numbers = {0, 0, 3, 4};
  vector<int> result;
  int target = 0;
  for (int i = 1; i <= numbers.size(); i++) {
    int fin_num = target - numbers[i - 1];
    vector<int>::iterator x = find(numbers.begin() + i, numbers.end(), fin_num);
    if (x != numbers.end()) {
      result.push_back(i);
      int f = distance(numbers.begin(), x);
      result.push_back(f + 1);
    }
  }
  /* for (int i = 0; i < result.size(); i++) cout<<result[i];*/
  for (auto i : result)
    cout << i << " ";
  cout << endl;
  return 0;
  /*
  vector<int> twoSum(vector<int> &numbers, int target)
{
  //Key is the number and value is its index in the vector.
      unordered_map<int, int> hash;
      vector<int> result;
      for (int i = 0; i < numbers.size(); i++) {
              int numberToFind = target - numbers[i];

          //if numberToFind is found in map, return them
              if (hash.find(numberToFind) != hash.end()) {
                  //+1 because indices are NOT zero based
                      result.push_back(hash[numberToFind] + 1);
                      result.push_back(i + 1);
                      return result;
              }

          //number was not found. Put it in the map.
              hash[numbers[i]] = i;
      }
      return result;
}*/
}
