#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define ull unsigned long long int
#define MOD 1000000007
#define precise(n) cout << fixed << setprecision(n) <<

/*
 *	Rotate the cheese as required, i.e. base =
 *	min(dimension1, dimension2) and height = max(dimension1, dimension2)
 *	Sort the cheeses as per their increasing heights.
 *
 *                   __
 *                __|  |
 *             __|  |  |
 *  h[0]  --> |  |  |  | <- h[n-1]
 *            |__|__|__|
 *            ^  ^  ^
 *            base[0] to base[n-1]
 *
 *  Total perimeter = 2*(sum of all bases) + h[0] + h[n-1] + (sum of all height
 *differences between h[0] & h[n-1])
 *
 */

void solve() {
  ll n;
  cin >> n;
  pair<ll, ll> dims;
  ll base[n], height[n];
  for (ll i = 0; i < n; i++) {
    cin >> dims.first >> dims.second;

    base[i] = min(dims.first, dims.second);
    height[i] = max(dims.first, dims.second);
  }

  ll var = 0;
  ll answer = 2 * accumulate(base, base + n, var);
  sort(height, height + n);
  answer += height[0] + height[n - 1];
  for (ll i = 1; i < n; i++) {
    answer += abs(height[i] - height[i - 1]);
  }

  cout << answer;
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
