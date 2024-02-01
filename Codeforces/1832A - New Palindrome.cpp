#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define ull unsigned long long int
#define MOD 1000000007
#define precise(n) cout << fixed << setprecision(n)

bool allCharactersSame(string s) {
  int n = (int)s.length();
  for (int i = 1; i < n; i++)
    if (s[i] != s[0])
      return false;

  return true;
}

void solve() {
  string s;
  cin >> s;

  int mid = (int)s.length() / 2;

  if (mid == 1) {
    cout << "NO";
    return;
  }
  int i = 0, k = 0;
  while (i < mid) {
    if (s[i] != s[0])
      break;
    i++;
  }

  if (i == mid)
    k = 0;
  else
    k = 1;

  cout << (k ? "YES" : "NO");
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
