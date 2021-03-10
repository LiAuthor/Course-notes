#include "algorithm"
#include "iostream"
#include "vector"
using namespace std;
int repeatedNTimes(vector<int> &A) {
  int N = A.size() / 2, count = 1;
  sort(A.begin(), A.end());
  for (int i = 0; i < A.size(); ++i) {
    while (A[i] == A[i + 1]) {
      ++count;
      if (count == N) {
        return A[i];
      }
    }
    count = 0;
  }
  return 0;
}
int main(int argc, char const *argv[]) {
  vector<int> A = {5, 1, 5, 2, 5, 3, 5, 4};
  cout << repeatedNTimes(A) << endl;
  return 0;
}
