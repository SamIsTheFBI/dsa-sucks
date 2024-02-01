#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define ull unsigned long long int
#define MOD 1000000007
#define precise(n) cout << fixed << setprecision(n) <<

void solve() {
  int r1, r2, c1, c2, d1, d2;
  cin >> r1 >> r2 >> c1 >> c2 >> d1 >> d2;

  int b = (r1 + c2 - d1) / 2;
  int a = r1 - b;
  int c = c1 - a;
  int d = r2 - c;

  if (a > 9 || b > 9 || c > 9 || d > 9) {
    cout << "-1";
    return;
  }
  if (a < 1 || b < 1 || c < 1 || d < 1) {
    cout << "-1";
    return;
  }

  if (a + b == r1 && a + c == c1 && a + d == d1 && c + d == r2 && c + b == d2 &&
      d + b == c2)
    ;
  else {
    cout << "-1";
    return;
  }

  if (a == b) {
    if (c == a && c == d) {
      cout << "-1";
      return;
    }
  } else {
    if ((a == d && b == c) || (a == c && b == d)) {
      cout << "-1";
      return;
    }
  }

  cout << a << " " << b << "\n" << c << " " << d;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif

  solve();

  // ll T, I = 1;
  // cin >> T;
  // while (T--) {
  //   cout << "Case #" << I << ": ";
  //   solve();
  //   I++;
  //   cout << "\n";
  // }

  return 0;
}
