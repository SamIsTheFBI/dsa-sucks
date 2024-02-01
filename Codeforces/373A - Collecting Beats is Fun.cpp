#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define ull unsigned long long int
#define MOD 1000000007
#define precise(n) cout << fixed << setprecision(n) <<

void solve() {
  int oneHand;
  cin >> oneHand;
  char arr[4][4];
  for (int i = 0; i < 4; i++)
    for (int j = 0; j < 4; j++)
      cin >> arr[i][j];

  char time[9] = {'1', '2', '3', '4', '5', '6', '7', '8', '9'};
  for (int t = 0; t < 9; t++) {
    int cnt = 0;
    for (int j = 0; j < 4; j++) {
      for (int i = 0; i < 4; i++) {
        if (arr[i][j] == time[t])
          cnt++;
      }
    }
    if (cnt > 2 * oneHand) {
      cout << "NO";
      return;
    }
  }

  cout << "YES";
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
