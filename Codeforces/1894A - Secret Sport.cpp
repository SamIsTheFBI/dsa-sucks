#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define ull unsigned long long int
#define MOD 1000000007
#define precise(n) fixed << setprecision(n)

int fact(int n) { return (n == 1 || n == 0) ? 1 : n * fact(n - 1); }

int a[1000000], b[1000000];

void solve() {
  int n;
  cin >> n;
  string s;
  cin >> s;

  int k = 1;
  vector<char> sa;
  vector<char> sb;
  for (int i = 0; i < n; i++) {
    if (s[i] == 'A')
      sa.push_back(s[i]);
    if (s[i] == 'B')
      sb.push_back(s[i]);
    if (i == 0)
      continue;
    if (s[i] != s[0])
      k = 0;
  }

  if (k) {
    cout << s[0];
    return;
  }

  if (int(sa.size()) > int(sb.size()) && s[n - 1] == 'A') {
    cout << 'A';
  } else if (int(sb.size()) > int(sa.size()) && s[n - 1] == 'B') {
    cout << 'B';
  } else {
    cout << s[n - 1];
  }
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

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
