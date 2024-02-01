#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define MOD 1000000007
// cout<<fixed<<setprecision(15)<<

void solve() {
  int n;
  cin >> n;
  int arr[n];

  int cntEven = 0;
  int cntOdd = 0;
  int sumEven = 0;
  int sumOdd = 0;
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
    if (arr[i] % 2 == 0) {
      sumEven += arr[i];
      cntEven++;
    } else {
      sumOdd += arr[i];
      cntOdd++;
    }
  }

  if (cntEven < cntOdd)
    cout << "NO";
  else if (sumEven > sumOdd)
    cout << "YES";
  else
    cout << "NO";

  // int *max = max_element(arr, arr+n);
  // if(*max % 2 == 0)
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif

  int T;
  cin >> T;
  while (T--) {
    solve();
    cout << "\n";
  }

  return 0;
}
