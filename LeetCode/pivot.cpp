#include "algorithm"
#include "iostream"
#include "numeric"
#include "vector"
using namespace std;
int main(int argc, char const *argv[]) {
  vector<int> number;
  bool right = true;
  vector<int>::iterator num_point;
  number = {1, 7, 3, 6, 5, 6};
  num_point = number.begin() + 1;
  for (int i = 0; i < number.size() - 2; i++) {
    int first_part = accumulate(number.begin(), num_point, 0);
    int second_part = accumulate(num_point + 1, number.end(), 0);
    // cout << "first_part=" << first_part << "  second_part=" << second_part
    //     << endl;
    ++num_point;
    if (first_part == second_part) {
      int dis = distance(number.begin(), num_point) - 1;
      cout << "distsnce=" << dis << endl;
      right = false;
    } else if (right)
      return -1;
  }
  /*
  // cout << *number.begin() << endl;
  //.begin() and .end() 函数是指针
  int nums[5] = {1, 2, 3, 4, 5};
  int sum = 10;
  //accumlate()函数传来三个参数，前两个为初末地址，第三个为累加初值
  cout << accumulate(number.begin(), number.end(), 0) << endl;
  cout << accumulate(nums, nums + 5, sum) << endl;
  cout << "sum=" << sum << endl;
  */
  return 0;
}
/*
//这里是第二种用法，调用自己定义的函数
// C++ program to demonstrate working of accumulate()
#include <iostream>
#include <numeric>
using namespace std;

// User defined function
int myfun(int x, int y)
{
        // for this example we have taken product
        // of adjacent numbers
        return x * y ;
}

int main()
{
        // Initialize sum = 1
        int sum = 1;
        int a[] = {5 , 10 , 15} ;

        // Simple default accumulate function
        cout << "\nResult using accumulate: ";
        cout << accumulate(a , a+3 , sum);

        // Using accumulate function with
        // defined function
        cout << "\nResult using accumulate with"
                        "user-defined function: ";
        cout << accumulate(a, a+3, sum, myfun);

        // Using accumulate function with
        // pre-defined function
        cout << "\nResult using accumulate with "
                        "pre-defined function: ";
        cout << accumulate(a, a+3, sum, std::minus<int>());

        return 0;
}
*/