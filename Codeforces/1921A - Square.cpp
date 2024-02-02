#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define ull unsigned long long int
#define MOD 1000000007
#define precise(n) fixed << setprecision(n)

void solve() {
  map<int, int> mp;
  int res = 0;
  for (int i = 0; i < 4; i++) {
    int t1, t2;
    cin >> t1 >> t2;
    if (mp[t1])
      res = pow(mp[t1] - t2, 2);
    else
      mp[t1] = t2;
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
