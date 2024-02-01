#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define ull unsigned long long int
#define MOD 1000000007
#define precise(n) fixed << setprecision(n)

int fact(int n) { return (n == 1 || n == 0) ? 1 : n * fact(n - 1); }

int a[1000000], b[1000000];

void solve() {
  int x, y, k;
  cin >> x >> y >> k;

  if (x > y) {
    cout << x;
    return;
  }

  if ((y - x) == k) {
    cout << x + k;
    return;
  }

  if ((y - x) < k) {
    cout << (y > x ? y : x);
    return;
  }

  int z = x + k;
  cout << abs(z + 2 * abs(y - z));
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif

  // solve();

  ll T;
  cin >> T;
  while (T--) {
    solve();
    cout << "\n";
  }

  return 0;
}
