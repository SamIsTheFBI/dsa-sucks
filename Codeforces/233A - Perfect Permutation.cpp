#include <bits/stdc++.h>
using namespace std;

/* This one's a silly one actually.
You just have to swap every even
(including 0) index with the one
after it.

I really don't know wtf was told
the questions but meh. Patterns. */

int main() {
  int n;
  cin >> n;

  int p[n];
  for (int i = 0; i < n; i++) {
    p[i] = i + 1;
  }

  if (n % 2 != 0) {
    cout << -1;
    return 0;
  }

  for (int i = 0; i < n; i += 2) {
    swap(p[i], p[i + 1]);
  }

  for (int i = 0; i < n; i++)
    cout << p[i] << " ";
}
