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
  int arr[n];
  for (int i = 0; i < n; i++)
    cin >> arr[i];

  for (int i = n - 1; i > -1; i--) {
    for (int j = i - 1; j > -1; j--) {
      if (arr[j] > arr[i]) {
        int z = (arr[j] - arr[i]);
        arr[i] += z;
        arr[j] -= z;
        continue;
      }
    }
  }

  for (auto x : arr)
    cout << x << " ";
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif

  solve();
  return 0;

  ll T;
  cin >> T;
  while (T--) {
    solve();
    cout << "\n";
  }

  return 0;
}
