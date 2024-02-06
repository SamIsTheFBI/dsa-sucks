#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define ull unsigned long long int
#define MOD 1000000007
#define precise(n) fixed << setprecision(n)

void solve() {
  int n;
  cin >> n;
  string s;
  cin >> s;

  int start = -1, ending = 0;
  for (int i = 0; i < n; i++) {
    if (start < 0 && s[i] == 'B')
      start = i;
    if (start > -1 && s[i] == 'B')
      ending = i;
  }

  cout << ending - start + 1;
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
