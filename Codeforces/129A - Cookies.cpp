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

  int even = 0, odd = 0;
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
    if (arr[i] % 2 == 0)
      even++;
    else
      odd++;
  }

  int sum = accumulate(arr, arr + n, 0);

  if (sum % 2 == 0) {
    cout << even;
  } else
    cout << odd;
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
