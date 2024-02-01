#include <bits/stdc++.h>
using namespace std;

// It's all about the patterns
// Whoever's turn it is, will
// remove one horiz and one vert
// stick. Just -1 n & m each turn
// and toggle between Akshat &
// Malvika

int main() {

#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif

  int k = 0;
  int n, m;
  cin >> n >> m;

  while (n * m > 0) {
    k = !k;
    n--;
    m--;
  }

  cout << (k ? "Akshat" : "Malvika");
}
