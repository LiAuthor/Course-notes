#include "iostream"
#include "vector"
using namespace std;
int a[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
bool run(int y) {
  if ((y % 4 == 0 && y % 100 != 0) || y % 400 == 0)
    return 1;
  return 0;
}
int main() {
  int t, n;
  cin >> t;
  while (t--) {
    int y, m, d, xq;
    scanf("%4d%2d%2d", &y, &m, &d);
    scanf("%d%d", &xq, &n);
    xq = (xq + n) % 7;
    if (xq == 0)
      xq += 7;
    while (n) {
      if (run(y))
        a[2] = 29;
      else
        a[2] = 28;
      while (a[m] > d && n) {
        d++;
        n--;
      }
      if (n) {
        m++;
        d = 0;
      }
      if (m == 13) {
        y += 1;
        m = 1;
        continue;
      }
    }
    printf("%d%02d%02d %d\n", y, m, d, xq);
  }
  return 0;
}
/*
bool run(int y) {
  if ((y % 4 == 0 && y % 100 != 0) || y % 400 == 0)
    return 1;
  return 0;
}
int main() {
  int Y, M, D, W, N;
  scanf("%4d%2d%2d%d%d", &Y, &M, &D, &W, &N);
  // printf("%d %d %d %d %d", Y, M, D, W, N);
  //求周几直接对7取余
  W = (W + N) % 7;
  if (W == 0)
    W = 7;
  int Month[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
  int Temp_M = 0, Original_M = M, Original_Y = Y; //得到原始的M和Y
  if (run(Y))
    Month[2] = 29;

  int Month_cha = Month[M] - D; //本月还差多少天满月
  //如果N在Month_cha范围外
  if (N > Month_cha) {
    N -= Month_cha;
    ++M, ++Temp_M;
  } else
    N += D; //如果N在Month_cha范围内 N就是几号

  while ((N - Month[M]) >= Month[M + 1]) {
    N -= Month[M];
    ++M, ++Temp_M;
    if (M == 13) {
      M = 1; //只要M置1一次，Y必须加一
      if (run(Y += 1))
        Month[2] = 29;
      else
        Month[2] = 28;
    }
  } //我们想要的是N-Month[M]来表示最终的N
  if (N - Month[M] > 0) {
    N -= Month[M];
    ++Temp_M;
  }
  M = (Temp_M + Original_M) % 12;
  if (M == 0)
    M = 12;
  Y = (Temp_M + Original_M) / 12 + Original_Y;
  // cout的输出若是月份或者日期为一位,前边不输出0
  // cout << Y << M << N << " " << W << endl;
  printf("%d%02d%02d %d\n", Y, M, N, W);
  return 0;
}*/