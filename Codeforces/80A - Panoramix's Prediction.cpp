#include <bits/stdc++.h>
using namespace std;

int checkPrime(int a) {
  int d = 0;
  for (int i = 2; i < a; i++)
    if (a % i == 0)
      d++;

  if (d > 0)
    return 0;
  else
    return 1;
}

int main() {
  int x, y;
  cin >> x >> y;

  /* What we do is ++
  x and check if it is prime.
  We do this for the last time
  when x == y.

  If curr value of x is prime,
  then break.

  After this we check if curr
  x == y.
  If it is not, then that
  means the prime number after
  init value of x is something
  other than y. */

  while (x <= y) {
    x++;
    if (checkPrime(x))
      break;
  }

  cout << (x == y ? "YES" : "NO");
}

