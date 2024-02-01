#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define MOD 1000000007
#define precise(n) cout << fixed << setprecision(n) <<

void solve() {
  int s, n;
  cin >> s >> n;
  pair<int, int> dragon[n];
  int i = 0;
  int tmp1, tmp2;
  while (i < n) {
    cin >> tmp1 >> tmp2;
    dragon[i] = {tmp1, tmp2};
    i++;
  }
  sort(dragon, dragon + n);

  i = 0;
  int k = 1;
  while (i < n) {
    if (dragon[i].first < s)
      s += dragon[i].second;
    else {
      k = 0;
      break;
    }
    i++;
  }

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

  solve();

  return 0;
}
