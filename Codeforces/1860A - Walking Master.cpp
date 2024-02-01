#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define MOD 1000000007
// cout<<fixed<<setprecision(15)<<

void solve() {
  int a, b, c, d;
  cin >> a >> b >> c >> d;

  int ans = 0;
  if (a == c && b == d) {
    cout << 0;
    return;
  }

  if (d < b) {
    cout << -1;
    return;
  }

  if (a < c && b == d) {
    cout << -1;
    return;
  }
  while (b != d) {
    a += 1;
    b += 1;
    ans++;
  }

  if (a < c) {
    cout << -1;
    return;
  }

  ans += (a - c);
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
