#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define ull unsigned long long int
#define MOD 1000000007
#define precise(n) cout << fixed << setprecision(n) <<

void solve() {
  ull k, l;
  cin >> k >> l;

  if (l % k != 0) {
    cout << "NO";
    return;
  }

  ull n = k;
  ull importance = 0;
  while (n < l) {
    n *= k;
    importance++;
  }

  if (n == l)
    cout << "YES\n" << importance;
  else
    cout << "NO";
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

  // int T;
  // cin >> T;
  // while (T--) {
  //   solve();
  //   cout << "\n";
  // }

  return 0;
}
