#include "algorithm"
#include "iostream"
#include "unordered_map"
#include "vector"
using namespace std;
int main() {
  // way one to build a unordered_map not good
  typedef std::unordered_map<int, char> Mymap;
  Mymap Example;
  Example.insert(Mymap::value_type(9, 'K'));
  Example.insert(Mymap::value_type(7, 'u'));
  Example.insert(Mymap::value_type(8, 'i'));
  // way twe to build a unordered_map i like this one
  unordered_map<char, int> TableOne;
  TableOne.insert(make_pair('L', 2));
  TableOne.insert(make_pair('i', 3));
  TableOne.insert(make_pair('J', 4));
  TableOne.insert(make_pair('u', 5));
  TableOne.insert(make_pair('n', 6));
  // find Class
  // can use in char
  cout << "find('J')==" << boolalpha << (TableOne.find('J') != TableOne.end())
       << endl;
  // find can't use in number
  cout << "find(2)==" << boolalpha << (TableOne.find(2) != TableOne.end())
       << endl;
  // way one to read TableOne, easy to understand
  unordered_map<char, int>::iterator it;
  for (it = TableOne.begin(); it != TableOne.end(); ++it) {
    cout << it->first << " : " << it->second << endl;
  }
  /*
  //way twe to read, got some bug wait to deal?????
  for (auto x : TableOne) {
    cout << x->first << " : " << x->second << endl;
  }
  */
  return 0;
}
// more about unordered_map
// https://docs.microsoft.com/en-us/cpp/standard-library/unordered-map?view=vs-2019