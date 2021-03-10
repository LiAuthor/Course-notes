#include "algorithm"
#include "cmath"
#include "iostream"
#include "vector"
using namespace std;
int mySqrt(int x) {
  /*
  int left=1,right=x,ans=0,mid=0,temp_squ=0;
  if(x<=1) return x;
  while(left<right){
      mid=(left+right)/2;
      temp_squ=mid*mid;
      if(temp_squ>x) right=mid;
      else if(temp_squ<x) left=mid+1;
      else return mid;
  }
  return left-1;
  */
  return (int)pow(x, 0.5);
}
int main() {
  cout << mySqrt(24) << endl;
  return 0;
}