#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define ff first
#define ss second
#define make make_pair
#define vi vector<int>
#define pb push_back
#define sortarr sort(arr, arr + n)
#define sortav sort(v.begin(), v.end())
#define forl(i, j, k) for (int i = j; i < k; i += 1)
#define forlr(i, j, k) for (int i = j; i >= k; i -= 1)
#define vin(x, v)                                                              \
  for (auto &x : v)                                                            \
    cin >> x;
#define endl "\n"
#define MOD 1000000007
// cout<<fixed<<setprecision(15)<<

void solve() {}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

// #ifndef ONLINE_JUDGE
//   freopen("input.txt", "r", stdin);
//   freopen("output.txt", "w", stdout);
// #endif

  int n;
  cin >> n;
  int arr[n][2];
  for (int i = 0; i < n; i++)
    cin >> arr[i][0] >> arr[i][1];

  int cnt = 0;
  for (int i = 0; i < n; i++) {
    for (int j = i + 1; j < n; j++) {
      if (arr[j][0] == arr[i][1])
        cnt++;
      if (arr[j][1] == arr[i][0])
        cnt++;
    }
  }

  cout << cnt;
  return 0;
}