#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define ull unsigned long long int
#define MOD 1000000007
#define precise(n) cout << fixed << setprecision(n) <<

void solve() {
  ll n;
  cin >> n;
  ll arr[n];
  ll minIdx = 1, min = LLONG_MAX;
  for (ll i = 0; i < n; i++) {
    cin >> arr[i];
    if (min > arr[i] && i > 0 && i < n) {
      min = arr[i];
      minIdx = i;
    }
  }

  if (min == LLONG_MAX && minIdx == 1)
    min = arr[1];

  if (arr[0] == arr[minIdx] || arr[0] < arr[minIdx]) {
    cout << "Bob";
    return;
  } else if (arr[0] > arr[minIdx]) {
    cout << "Alice";
    return;
  }
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

  ll T;
  cin >> T;
  while (T--) {
    solve();
    cout << "\n";
  }

  return 0;
}
