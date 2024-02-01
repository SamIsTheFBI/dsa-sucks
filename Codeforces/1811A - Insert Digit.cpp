#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define ull unsigned long long int
#define MOD 1000000007
#define precise(n) cout << fixed << setprecision(n) <<

void solve() {
  ll n;
  char d;
  cin >> n >> d;
  char arr[n];
  char tmp;
  int idx = -2;
  int k = 1;
  for (int i = 0; i < n; i++) {
    cin >> tmp;
    if (tmp < d && k == 1) {
      idx = i;
      k = 0;
    }
    arr[i] = tmp;
  }

  for (int i = 0; i < n; i++) {
    if (i == idx) {
      cout << d;
    }
    cout << arr[i];
  }

  if (idx == -2) {
    cout << d;
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

  int T;
  cin >> T;
  while (T--) {
    solve();
    cout << "\n";
  }

  return 0;
}
