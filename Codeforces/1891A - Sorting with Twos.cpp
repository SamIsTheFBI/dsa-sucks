#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define ull unsigned long long int
#define MOD 1000000007
#define precise(n) fixed << setprecision(n)

int a[1000000], b[1000000];

void solve() {
  int n;
  cin >> n;
  int arr[n];
  int k = 1;
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
    if (i > 0 && k) {
      if (arr[i - 1] > arr[i])
        k = 0;
    }
  }

  if (k) {
    cout << "YES";
    return;
  }

  int z = 1, l = 0;
  for (int i = 0; i < n; i += pow(2, l++)) {
    for (int j = 0; j <= i; j++)
      arr[j] -= arr[i];

    if (i == 0) {
      continue;
    }

    z = 1;
    for (int j = 1; j < n; j++) {
      if (arr[j - 1] > arr[j]) {
        z = 0;
        break;
      }
    }

    if (z) {
      cout << "YES";
      return;
    }
  }

  cout << "NO";
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
