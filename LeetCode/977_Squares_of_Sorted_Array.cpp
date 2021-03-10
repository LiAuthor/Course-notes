#include "algorithm"
#include "iostream"
#include "vector"
using namespace std;
vector<int> sortedSquares(vector<int> &A) {
  int i = 0, temp = 1;
  while (i < A.size()) {
    temp = A[i] * A[i];
    A[i] = temp;
    ++i;
  }
  sort(A.begin(), A.end());
  return A;
}
int main() {
  vector<int> A = {-4, -1, 0, 3, 10};
  int L = A.size();
  sortedSquares(A);
  return 0;
}