#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define ull unsigned long long int
#define MOD 1000000007
#define precise(n) cout << fixed << setprecision(n) <<

void solve() {
  string s;
  cin >> s;

  if (s[0] == '0') {
    cout << 0;
    return;
  }

  int len = (int)s.length();

  int ans = 1, tmp = 0, k = 0;
  for (int i = 0; i < len; i++) {
    if (s[i] == '?') {
      k = 1;
      if (i == 0) {
        tmp = 9;
      } else
        tmp = 10;
      ans *= tmp;
    }
  }

  if (k != 1) {
    ans = 1;
  }

  cout << ans;
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

  ll T;
  cin >> T;
  while (T--) {
    solve();
    cout << "\n";
  }

  return 0;
}
