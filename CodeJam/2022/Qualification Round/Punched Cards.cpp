#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define ull unsigned long long int
#define MOD 1000000007
#define precise(n) cout << fixed << setprecision(n) <<

void solve() {
  int n, m;
  cin >> n >> m;

  for (int i = 0; i < m; i++) {
    if (i == 0)
      cout << "..";
    else
      cout << "+-";
  }
  cout << "+\n";

  for (int i = 0; i < m; i++) {
    if (i == 0)
      cout << "..";
    else
      cout << "|.";
  }
  cout << "|\n";

  for (int i = 0; i < m; i++) {
    cout << "+-";
  }
  cout << "+\n";

  n--;

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      cout << "|.";
    }
    cout << "|\n";
    for (int j = 0; j < m; j++) {
      cout << "+-";
    }
    cout << "+\n";
  }
}

int main() {
  //   ios_base::sync_with_stdio(false);
  //   cin.tie(NULL);
  //   cout.tie(NULL);
  //
  // #ifndef ONLINE_JUDGE
  //   freopen("input.txt", "r", stdin);
  //   freopen("output.txt", "w", stdout);
  // #endif

  // solve();

  int T, I = 1;
  cin >> T;
  while (T--) {
    cout << "Case #" << I << ":\n";
    solve();
    I++;
  }

  return 0;
}
