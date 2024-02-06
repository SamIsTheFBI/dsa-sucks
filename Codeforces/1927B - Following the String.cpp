#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define ull unsigned long long int
#define MOD 1000000007
#define precise(n) fixed << setprecision(n)

void solve() {
  int n;
  cin >> n;
  int arr[n];
  for (int i = 0; i < n; i++)
    cin >> arr[i];

  unordered_map<char, int> mp;
  char ch = 'a';
  for (int i = 0; i < n; i++) {
    int f = 0;
    for (auto x : mp) {
      if (x.second == arr[i]) {
        cout << x.first;
        mp[x.first]++;
        f = 1;
        break;
      }
    }

    if (!f) {
      mp[ch]++;
      cout << ch;
      if (ch != 'z')
        ch = char(ch + 1);
      else
        ch = 'a';
    }
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
  // return 0;

  int T;
  cin >> T;
  while (T--) {
    solve();
    cout << "\n";
  }

  return 0;
}
