#include <bits/stdc++.h>
using namespace std;

// 1  2
// 2  1
// ↘️ ↙
// 1 2
//
// I can't explain

int main() {

#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif

  int n;
  cin >> n;

  int arr[n];
  for (int i = 0; i < n; i++)
    cin >> arr[i];

  int ans[n];
  for (int i = 0; i < n; i++) {
    ans[arr[i] - 1] = i + 1;
  }

  for (auto x : ans)
    cout << x << " ";
}
