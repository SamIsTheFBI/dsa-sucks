#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define ull unsigned long long int
#define MOD 1000000007
#define precise(n) cout << fixed << setprecision(n) <<

int k = 0;
vector<int> v;
int reCurse(int candies, int n, int spell) {
  if (n == candies) {
    return 1;
  } else if (candies > n) {
    return 0;
  } else if (candies < n) {
    if (spell == 1) {
      candies = candies * 2 - 1;
    } else
      candies = candies * 2 + 1;
  }

  // Call spell 1
  k = reCurse(candies, n, 1);

  if (k == 1) {
    v.push_back(spell);
    return 1;
  } else {
    if (v.size() != 0)
      v.pop_back();
  }

  // Call spell 2
  k = reCurse(candies, n, 2);

  if (k == 1) {
    v.push_back(spell);
    return 1;
  } else {
    if (v.size() != 0)
      v.pop_back();
  }

  return k;
}

void solve() {
  int n;
  cin >> n;

  // int cnt = 40;
  int candies = 1;

  int ans = reCurse(candies, n, 2);
  if (!ans) {
    cout << -1;
    return;
  }

  cout << v.size() << "\n";
  for (auto x : v)
    cout << x << " ";
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

  int T;
  cin >> T;
  while (T--) {
    solve();
    cout << "\n";
  }

  return 0;
}
