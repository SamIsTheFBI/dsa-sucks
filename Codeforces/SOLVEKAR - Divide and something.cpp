#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define ull unsigned long long int
#define MOD 1000000007
#define precise(n) cout << fixed << setprecision(n) <<

void solve() {
  int n;
  cin >> n;
  string s;
  cin >> s;

  string tmp1 = "";
  string tmp2 = "";
  tmp1 += s[0];
  for (int i = 1; i < int(s.size()); i++)
    tmp2 += s[i];

  int i = 0;
  while (stoi(tmp1) > stoi(tmp2)) {
    tmp1 += s[i];
    tmp2 = "";
    for (int i = i + 1; i < int(s.size()); i++)
      tmp2 += s[i];
    i++;
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

  solve();

  // ll T;
  // cin >> T;
  // while (T--) {
  //   solve();
  //   cout << "\n";
  // }

  return 0;
}
