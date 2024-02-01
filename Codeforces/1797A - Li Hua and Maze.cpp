#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define ull unsigned long long int
#define MOD 1000000007
#define precise(n) cout << fixed << setprecision(n) <<

void solve() {
  int n, m, x1, y1, x2, y2;
  cin >> n >> m >> x1 >> y1 >> x2 >> y2;

  int ans1 = 0;
  int ans2 = 0;
  if (x1 > 1 && y1 > 1 && x1 < n && y1 < m) {
    ans1 = 4;
  } else if ((x1 == 1 && y1 == 1) || (x1 == n && y1 == 1) ||
             (x1 == n && y1 == m) || (x1 == 1 && y1 == m)) {
    ans1 = 2;
  } else
    ans1 = 3;

  if (x2 > 1 && y2 > 1 && x2 < n && y2 < m) {
    ans2 = 4;
  } else if ((x2 == 1 && y2 == 1) || (x2 == n && y2 == 1) ||
             (x2 == n && y2 == m) || (x2 == 1 && y2 == m)) {
    ans2 = 2;
  } else
    ans2 = 3;

  cout << min(ans1, ans2);
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

  int T;
  cin >> T;
  while (T--) {
    solve();
    cout << "\n";
  }

  return 0;
}
