#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define ull unsigned long long int
#define MOD 1000000007
#define precise(n) cout << fixed << setprecision(n) <<

void solve() {
  int n;
  cin >> n;

  int t = 0;
  if (n % 2 == 0) {
    t = n / 2;
  } else
    t = (n / 2) + 1;

  cout << t << "\n";
  int left = 1;
  int right = 3 * n;
  for (int i = 0; i < t; i++) {
    cout << left << " " << right << "\n";
    left += 3;
    right -= 3;
  }
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
    // cout << "\n";
  }

  return 0;
}
