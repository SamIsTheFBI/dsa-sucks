#include <bits/stdc++.h>
using namespace std;

int main () {
	int ans=0, d, arr[4];
	for (int j=0; j < 4; j++)
		cin >> arr[j];

	cin >> d;

	/*
	 * The outer for loop checks the number of dragons
	 * the princess came across.
	 * The inner for loop checks which arr[i]th dragon
	 * it is.
	 *
	 * Every arr[i]th dragon gets gets damaged, so
	 * we check if it is the arr[i]th dragon if that 
	 * dragon's number is divisible by arr[i].
	 * 
	 */

	for (int i=1; i <= d; i++){
		for (int j=0; j < 4; j++){
			if (i % arr[j] == 0){
				ans++;
				break;
			}
		}
	}

	cout << ans;
}
