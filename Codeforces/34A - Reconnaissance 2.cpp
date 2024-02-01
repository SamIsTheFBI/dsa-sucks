#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define ull unsigned long long int
#define MOD 1000000007
#define precise(n) cout << fixed << setprecision(n) <<

void solve() {
  int n;
  cin >> n;
  int arr[n];
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }

  int a = 0;
  int b = 0;
  int min = 99999;

  for (int i = 1; i < n; i++) {
    if (abs(arr[i] - arr[i - 1]) < min) {
      a = i;
      b = i + 1;
      min = abs(arr[i] - arr[i - 1]);
    }
  }

  if (abs(arr[0] - arr[n - 1]) < min) {
    a = n;
    b = 1;
    min = abs(arr[0] - arr[n - 1]);
  }

  cout << a << " " << b;
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
