#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define ull unsigned long long int
#define MOD 1000000007
#define precise(n) cout << fixed << setprecision(n) <<

void solve() {
  ll n, x1, y1, x2, y2;
  cin >> n >> x1 >> y1 >> x2 >> y2;

  ll innerMost = n / 2;
  vector<long long int> arr;
  ll tmp = 0;
  ll k = 1;
  for (ll i = 0; i < n; i++) {
    if (i == innerMost) {
      arr.push_back(tmp);
      k = 0;
      continue;
    }

    if (k)
      tmp++;
    else
      tmp--;
    arr.push_back(tmp);
  }

  ll i1 = arr[x1 - 1];
  ll j1 = arr[y1 - 1];
  ll i2 = arr[x2 - 1];
  ll j2 = arr[y2 - 1];

  ll ans = abs(min(i2, j2) - min(i1, j1));
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

  int T;
  cin >> T;
  while (T--) {
    solve();
    cout << "\n";
  }

  return 0;
}
