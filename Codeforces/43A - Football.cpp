#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define ull unsigned long long int
#define MOD 1000000007
#define precise(n) cout << fixed << setprecision(n) <<

void solve() {
  int n;
  cin >> n;

  int max = 0;
  string ans;
  map<string, int> team;
  for (int i = 0; i < n; i++) {
    string tmp;
    cin >> tmp;
    team[tmp]++;
  }

  auto it = team.begin();
  while (it != team.end()) {
    if (max < it->second) {
      max = it->second;
      ans = it->first;
    }
    it++;
  }
  cout << ans;
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

  // int T;
  // cin >> T;
  // while (T--) {
  //   solve();
  //   cout << "\n";
  // }

  return 0;
}
