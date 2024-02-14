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

  int arr[3] = {1, 1, 1};
  int sum = n;
  n -= 3;
  int i = 2;
  while (arr[0] + arr[1] + arr[2] != sum) {
    arr[i]++;
    n--;
    if (arr[i] == 26)
      i--;
  }
  cout << char(96 + arr[0]) << char(96 + arr[1]) << char(96 + arr[2]);
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
