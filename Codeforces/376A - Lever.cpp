#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define ull unsigned long long int
#define MOD 1000000007
#define precise(n) cout << fixed << setprecision(n) <<

void solve() {

  /* Balanced iff
   * sum of all torques on the left =
   * sum of all torques on the right
   */

  string s;
  getline(cin, s);

  ll tLeft = 0;
  ll tRight = 0;

  ll i = 0;
  while (s[i] != '^') {
    i++;
  }

  ll pivot = i;

  i = 0;
  while (i < pivot) {
    if (s[i] != '=')
      tLeft += (s[i] - 48) * (pivot - i); // Refer ASCII table
    i++;
  }

  i++;

  while (i < (ll)s.length()) {
    if (s[i] != '=')
      tRight += (s[i] - 48) * (i - pivot);
    i++;
  }

  if (tRight == tLeft)
    cout << "balance";
  else if (tRight > tLeft)
    cout << "right";
  else
    cout << "left";
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
