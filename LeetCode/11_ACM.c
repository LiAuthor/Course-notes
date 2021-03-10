#include <stdio.h>
int main() {
  int a, b, c, d[8], e, f;
  while (scanf("%d%d", &a, &b) != EOF) {
    if (b == 0 && a == 0)
      break;
    f = 0;
    d[0] = a % 10;
    d[1] = a / 10 % 10;
    d[2] = a / 100;
    d[3] = b % 10;
    d[4] = b / 10 % 10;
    d[5] = b / 100;
    for (e = 0; e <= 2; e++) {
      if (d[e] + d[e + 3] >= 10) {
        f++;
        d[e + 1]++;
      }
    }
    printf("%d\n", f);
  }
  return 0;
}