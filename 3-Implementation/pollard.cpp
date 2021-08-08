#include <stdio.h>

const int n = 382, N = n + 1;  /* N = 1019 -- prime     */
const int alpha = 2;            /* generator             */
const int beta = 228;             /* 2^{10} = 1024 = 5 (N) */

void new_xab(int& x, int& a, int& b) {
  switch (x % 3) {
  case 0: x = x * x     % N;  a =  a*2  % n;  b =  b*2  % n;  break;
  case 1: x = x * beta % N;  a = (a+1) % n;                  break;
  case 2: x = x * alpha  % N;                  b = (b+1) % n;  break;
  }
}

int main() {
  int x = 1, a = 0, b = 0;
  int X = x, A = a, B = b;
  int l=0;
  for (int i = 1; i < n; ++i) {
    new_xab(x, a, b);
    new_xab(X, A, B);
    new_xab(X, A, B);
    printf("%3d  %4d %3d %3d  %4d %3d %3d\n", i, x, a, b, X, A, B);
    if (x == X) break;

  }
  int mt = (a-A) % n;
  int nt = (B-b) % n;
  int mx = mt/nt;

    printf("\n");
  mx = mx%n;
    for (int x=1; x<n; x++)
       if ((mx*x) % n == 1)
          printf("--------------> %d",x);


}
