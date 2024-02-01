#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define MOD 1000000007
// cout<<fixed<<setprecision(15)<<

void solve() {
  int n, m;
  cin >> n >> m;

  char grades[n][m];
	for(int i=0; i < n; i++)
		for(int j=0; j < m; j++)
			cin >> grades[i][j];

  char max;
  set<char> maxIdx;
  for (int j = 0; j < m; j++) {
    max = -1;
    // int maxi = -1;
    for (int i = 0; i < n; i++)
      if (max <= grades[i][j])
        max = grades[i][j];
    for (int i = 0; i < n; i++)
      if (max == grades[i][j])
        maxIdx.insert(i);
  }

  cout << maxIdx.size();
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

  return 0;
}
