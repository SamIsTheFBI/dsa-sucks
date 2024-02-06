#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define ull unsigned long long int
#define MOD 1000000007
#define precise(n) fixed << setprecision(n)

void solve() {
  int n, m, k;
  cin >> n >> m >> k;
  int a[n], b[m];
  vector<int> v;
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  sort(a, a + n);
  for (int i = 0; i < m; i++) {
    cin >> b[i];
  }
  sort(b, b + m);

  vector<int> a1, b1;
  for (int i = 0; i < n; i++) {
    int size = int(a1.size());
    if (a[i] <= k) {
      if (!size) {
        a1.push_back(a[i]);
        continue;
      }
      if (size && a1[size - 1] != a[i])
        a1.push_back(a[i]);
    }
  }

  if (int(a1.size()) < k / 2) {
    cout << "NO";
    return;
  }

  for (int i = 0; i < m; i++) {
    int size = int(b1.size());
    if (b[i] <= k) {
      if (!size) {
        b1.push_back(b[i]);
        continue;
      }
      if (size && b1[size - 1] != b[i])
        b1.push_back(b[i]);
    }
  }

  set<int> s;

  for (auto x : a1)
    s.insert(x);
  for (auto x : b1)
    s.insert(x);

  if (int(s.size()) != k) {
    cout << "NO";
    return;
  }

  if (int(b1.size()) < k / 2) {
    cout << "NO";
    return;
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
  // return 0;

  int T;
  cin >> T;
  while (T--) {
    solve();
    cout << "\n";
  }

  return 0;
}
