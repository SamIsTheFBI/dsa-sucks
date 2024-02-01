#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define ull unsigned long long int
#define MOD 1000000007
#define precise(n) cout << fixed << setprecision(n) <<

bool allCharactersSame(string s) {
  int n = (int)s.length();
  for (int i = 1; i < n; i++)
    if (s[i] != s[0])
      return false;

  return true;
}

void solve() {

  /*
   * We're only gonna have 4 cases:
   *
   * minm1 | maxm1 | .. | .. | .. | .. columns > rows
   * maxm2 |   ..  | .. | .. | .. | .. (swap maxm1 with
   *   ..  |   ..  | .. | .. | .. | ..  maxm2 for rows > cols)
   *
   *
   * maxm1 | minm1 | .. | .. | .. | .. columns > rows
   * minm2 |   ..  | .. | .. | .. | .. (swap maxm1 with
   *   ..  |   ..  | .. | .. | .. | ..  maxm2 for rows > cols)
   *
   * Only those 3 cells matter. Think.
   * Then max of these is required to be the output.
   */

  ll n, m;
  cin >> n >> m;

  ll len = n * m;
  ll nums[len];
  for (ll i = 0; i < n * m; i++)
    cin >> nums[i];

  sort(nums, nums + len);

  ll minm1 = nums[0];
  ll minm2 = nums[1];
  ll maxm1 = nums[len - 1];
  ll maxm2 = nums[len - 2];

  ll sum1 = (maxm1 - minm1) * (max(m, n) - 1);
  sum1 += (maxm2 - minm1) * (min(m, n) - 1);
  sum1 += (maxm1 - minm1) * (len - m - n + 1);

  ll sum2 = (maxm1 - minm1) * (max(n, m) - 1);
  sum2 += (maxm1 - minm2) * (min(n, m) - 1);
  sum2 += (maxm1 - minm1) * (len - m - n + 1);

  cout << max(sum1, sum2);
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
