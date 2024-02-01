#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define ull unsigned long long int
#define MOD 1000000007
#define precise(n) cout << fixed << setprecision(n) <<

ll check8(ll n) {

  int cnt = 0;
  while (n) {
    if (n % 10 == 8 || n % 10 == -8) {
      cnt++;
    }
    n /= 10;
  }

  return cnt;
}

ll countDigit(ll n) {
  ll cnt = 0;
  while (n) {
    n /= 10;
    cnt++;
  }
  return cnt;
}

void solve() {
  ll n;
  cin >> n;

  if (n == -8) {
    cout << 16;
    return;
  }

  int tmp = n;
  while (tmp) {
    if (tmp % 10 == -8 || tmp % 10 == 8)
      break;
    else
      tmp /= 10;
  }

  if (tmp == n && check8(n) == 1 && countDigit(n) == 1) {
    cout << 10;
    return;
  } else if (check8(n) > 1) {
    cout << 1;
    return;
  }

  n++;
  int ans = 1;
  while (!check8(n)) {
    n++;
    ans++;
  }
  cout << ans;
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
