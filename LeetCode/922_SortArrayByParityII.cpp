#include "algorithm"
#include "iostream"
#include "vector"
using namespace std;
/*
vector<int> sortArrayByParityII(vector<int> &A) {
  vector<int> B, C, D;
  int length = A.size();
  for (int i = 0; i < length; ++i) {
    if (A[i] % 2 == 0)
      B.push_back(A[i]);
    else
      C.push_back(A[i]);
  }
  int b = 0, c = 0;
  for (int i = 0; i < length; ++i) {
    if (i % 2 == 0)
      D.push_back(B[b++]);
    else
      D.push_back(C[c++]);
  }
  return D;
}*/
/*
vector<int> sortArrayByParityII(vector<int> &A) {
  vector<int> B(A.size(), 0);
  int ji = 1, ou = 0;
  for (int i = 0; i < A.size(); ++i) {
    if (A[i] % 2 == 0) {
      B[ou] = A[i];
      ou += 2;
    } else {
      B[ji] = A[i];
      ji += 2;
    }
  }
  return B;
}*/
vector<int> sortArrayByParityII(vector<int> &A) {
  int temp = 0, t = 0;
  for (int i = 0; i < A.size(); ++i) {
    if (i % 2 == 0) {      //判断奇偶数位
      if (A[i] % 2 != 0) { //判断奇偶数
        temp = i;
        while (A[temp] % 2 != 0)
          ++temp;
        t = A[i];
        A[i] = A[temp];
        A[temp] = t;
      }
    } else {
      if (A[i] % 2 == 0) {
        temp = i;
        while (A[temp] % 2 == 0)
          ++temp;
        t = A[i];
        A[i] = A[temp];
        A[temp] = t;
      }
    }
  }
  return A;
}
int main() {
  vector<int> A = {1, 4};
  for (int x : sortArrayByParityII(A))
    cout << x << " ";
  cout << endl;
  return 0;
}