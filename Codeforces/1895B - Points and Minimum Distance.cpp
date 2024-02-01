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
  int arr[2 * n];
  for (int i = 0; i < 2 * n; i++)
    cin >> arr[i];

  // if (n == 2) {
  //   cout << arr[0] << " " << arr[1];
  //   cout << "\n" << arr[2] << " " << arr[3];
  //   return;
  // }

  sort(arr, arr + (2 * n));

  int dist = 0, prevx = 0, prevy = 0;
  for (int i = 0; i < n; i++) {
    if (i == 0) {
      prevx = arr[i];
      prevy = arr[(2 * n) - 1 - i];
      continue;
    }

    int some = abs(prevx - arr[i]) + abs(prevy - arr[(2 * n) - 1 - i]);
    dist = some;
  }

  cout << dist;

  for (int i = 0; i < n; i++) {
    cout << "\n" << arr[i] << " " << arr[(2 * n) - 1 - i];
  }
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
