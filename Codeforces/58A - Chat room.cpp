// CF Problem 58A
// If found letters of "hello", then count. If count == 5 then YES else NO

#include <bits/stdc++.h>
using namespace std;
 
int main() {
	string s, h="hello";
	getline(cin, s);
	int i=0, j=0;
	while(i < (int)s.size()){
		if(s[i] == h[j]){
			j++;
		}
		i++;
	}

	cout << (j==5 ? "YES" : "NO");
}
