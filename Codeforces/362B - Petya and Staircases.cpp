#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define ull unsigned long long int
#define MOD 1000000007
#define precise(n) cout << fixed << setprecision(n) <<

void solve() {
  int n, m;
  cin >> n >> m;

  int arr[m];
  for (int i = 0; i < m; i++) {
    cin >> arr[i];
  }

  sort(arr, arr + m);

  int cnt = 0;
  for (int i = 0; i < m - 1; i++) {
    if (arr[i] + 1 == arr[i + 1]) {
      cnt++;
    } else
      cnt = 0;

    if (cnt > 1) {
      cout << "NO";
      return;
    }
  }

  if (arr[0] == 1 || arr[m - 1] == n) {
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

  solve();

  // ll T, I = 1;
  // cin >> T;
  // while (T--) {
  //   cout << "Case #" << I << ": ";
  //   solve();
  //   I++;
  //   cout << "\n";
  // }

  return 0;
}
