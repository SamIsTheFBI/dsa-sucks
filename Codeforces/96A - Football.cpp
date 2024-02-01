#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define ull unsigned long long int
#define MOD 1000000007
#define precise(n) fixed << setprecision(n)

int fact(int n) { return (n == 1 || n == 0) ? 1 : n * fact(n - 1); }

int a[1000000], b[1000000];

void solve() {
  string s;
  cin >> s;

  if (int(s.size()) < 7) {
    cout << "NO";
    return;
  }

  for (int i = 0; i < int(s.size()); i++) {
    if (i + 6 < int(s.size()) && s[i + 6] == s[i]) {
      int some = i + 6;
      int z = i;
      int l = 1;
      for (int j = z + 1; j <= some; j++) {
        if (s[j] != s[z]) {
          l = 0;
          break;
        }
      }

      if (l) {
        cout << "YES";
        return;
      }
    }
  }

  cout << "NO";
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif

  solve();
  return 0;

  ll T;
  cin >> T;
  while (T--) {
    solve();
    cout << "\n";
  }

  return 0;
}
