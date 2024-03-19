#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define ull unsigned long long int
#define MOD 1000000007
#define precise(n) fixed << setprecision(n)

void solve() {
  int a, b, c;
  cin >> a >> b >> c;
  int res = a;
  a -= a;

  while (b % 3 != 0) {
    if (!c) {
      cout << -1;
      return;
    }
    c--;
    b++;
  }

  if (b % 3 == 0) {
    res += (b / 3);
    b -= b;
  }

  while (c > 0) {
    if (c < 3) {
      res++;
      c -= c;
      continue;
    }

    res += (c / 3);
    c = c % 3;
  }

  cout << res;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif

  // solve();
  // return 0;

  int T;
  cin >> T;
  while (T--) {
    solve();
    cout << "\n";
  }

  return 0;
}
