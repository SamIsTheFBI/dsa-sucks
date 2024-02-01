#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define ull unsigned long long int
#define MOD 1000000007
#define precise(n) fixed << setprecision(n)

bool allCharactersSame(string s) {
  int n = (int)s.length();
  for (int i = 1; i < n; i++)
    if (s[i] != s[0])
      return false;

  return true;
}

int a[1000000], b[1000000];
void solve() {
  int n, m;
  cin >> n >> m;
  string s, t;

  cin >> s >> t;

  if (int(s.size()) == 1) {
    cout << "YES";
    return;
  }

  int k = 1;
  for (int i = 1; i < int(s.size()); i++) {
    if (s[i] == s[i - 1] && s[i] == t[0]) {
      cout << "NO";
      return;
    }
    if (s[i] != s[i - 1])
      continue;
    else {
      k = 0;
      break;
    }
  }

  if (k) {
    cout << "YES";
    return;
  }

  int l = 1;
  for (int i = 1; i < int(t.size()); i++) {
    if (t[i] != t[i - 1])
      continue;
    else {
      l = 0;
      break;
    }
  }

  if (!l) {
    cout << "NO";
    return;
  }

  if (l && int(t.size()) == 2) {
    cout << "NO";
    return;
  }

  for (int i = 0; i < n - 1; i++) {
    if (s[i] == s[i + 1] && (s[i] == t[0] || s[i + 1] == t[m - 1])) {
      cout << "NO";
      return;
    }
  }

  cout << "YES";
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
