#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define ull unsigned long long int
#define MOD 1000000007
#define precise(n) cout << fixed << setprecision(n)

bool allCharactersSame(string s) {
  int n = (int)s.length();
  for (int i = 1; i < n; i++)
    if (s[i] != s[0])
      return false;

  return true;
}

void solve() {
  int n;
  cin >> n;

  int arr[n];
  for (int i = 0; i < n; i++)
    arr[i] = i + 1;

  int sum = accumulate(arr, arr + n, 0);

  while (sum % n != 0) {
    arr[0] += 1;
    sum = accumulate(arr, arr + n, 0);
  }

  for (int i = 0; i < n; i++)
    cout << arr[i] << " ";
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
