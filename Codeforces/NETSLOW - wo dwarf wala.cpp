#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define ull unsigned long long int
#define MOD 1000000007
#define precise(n) cout << fixed << setprecision(n) <<

void solve() {
	map<char, int> m1, m2;
	string tmp,tmp2;
	cin >> tmp;
	for(int i=0; i < (int)tmp.length(); i++){
		m1[tmp[i]]++;
	}
	cin >> tmp2;
	for(int i=0; i < (int)tmp.length(); i++){
		m2[tmp2[i]]++;
	}

	string str;
	if((int)tmp.size() < (int)tmp2.size())
		str = tmp2;
	else
		str = tmp;

	for(int i=0; i < (int)str.size(); i++){
		if(m1[str[i]] != m2[str[i]]){
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

  // ll T, I = 1;
  // cin >> T;
  // while (T--) {
  //   cout << "Case #" << I << ": ";
  //   solve();
  //   I++;
  //   cout << "\n";
  // }

  return 0;
}
