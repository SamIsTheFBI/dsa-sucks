#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define ull unsigned long long int
#define MOD 1000000007
#define precise(n) fixed << setprecision(n)

bool allCharactersSame(string s) {
  int n = (int)s.length();
  for (int i = 1; i < n; i++)
    if (s[i] != s[0])
      return false;

  return true;
}

void add_to_array(ll query_val, ll *arr, int query_typ, ll n) {
  for (ll i = 0; i < n; i++) {
    if (arr[i] % 2 == 0 && query_typ == 0)
      arr[i] += query_val;
    else if (arr[i] % 2LL != 0 && query_typ == 1)
      arr[i] += query_val;
  }
}

void solve() {
  int n;
  cin >> n;

  int arr[n];
  int tmp = n;
  for (int i = 0; i < n; tmp++) {
    if (i < 2) {
      arr[i] = tmp;
      i++;
      continue;
    }
    int some = tmp;
    if ((3 * some) % (arr[i - 2] + arr[i - 1]) == 0)
      continue;
    else {
      arr[i] = some;
      i++;
    }
  }

  for (auto x : arr)
    cout << x << " ";
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
