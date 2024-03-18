#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define ull unsigned long long int
#define MOD 1000000007
#define precise(n) fixed << setprecision(n)

void solve() {
  int n, k;
  cin >> n >> k;
  if (!k) {
    cout << n;
    return;
  }

  int bridges = (n * (n - 1)) / 2;
  if (k == bridges || k >= n - 1) {
    cout << 1;
    return;
  }

  cout << n;
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
