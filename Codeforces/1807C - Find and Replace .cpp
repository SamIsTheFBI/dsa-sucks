#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define MOD 1000000007
// cout<<fixed<<setprecision(15)<<

void replaceChar(char *arr, char c1, char c2, int n) {
	for(int i=0; i < n; i++){
		if(arr[i] == c1)
			arr[i] = c2;
	}
}

void solve() {
  int n;
  cin >> n;
  char arr[n];

	for(int i=0; i < n; i++){
		cin >> arr[i];
	}

	int k = 1;
	char rep = '1';
	for(int i=0; i < n-1; i++){
		if(i!=0){
			if(arr[i-1] == '1')
				rep = '0';
			else if (arr[i-1] == '0')
				rep = '1';
		}
		replaceChar(arr, arr[i], rep, n);
		// if(rep == '1')
		// 	rep = '0';
		// else if (rep == '0')
		// 	rep = '1';

		if(arr[i] == arr[i+1]){
			k = 0;
			break;
		}
	}

	if (k)
		cout << "YES";
	else
		cout << "NO";
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
