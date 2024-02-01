#include <bits/stdc++.h>
using namespace std;

int main () {
	int n;
	cin >> n;

	/*
	 * Make a lvls[n] which stores
	 * all the level indices
	 */

	int lvls[n];
	for (int i=0; i < n; i++)
		lvls[i] = i+1;

	/*
	 * For each friend,
	 * check which levels
	 * they complete. If P
	 * can complete level l,
	 * check if it is present 
	 * in lvls[n], if yes
	 * then change lvl[j] = 0 
	 * (to mark it done)
	 */

	int p;
	cin >> p;

	int l;
	for (int i=0; i < p; i++){
		cin >> l;
		for (int j=0; j < n; j++){
			if (lvls[j] == l){
				lvls[j] = 0;
				break;
			}
		}
	}

	cin >> p;

	for (int i=0; i < p; i++){
		cin >> l;
		for (int j=0; j < n; j++){
			if (lvls[j] == l){
				lvls[j] = 0;
				break;
			}
		}
	}

	/*
	 * Check if lvls[j] == 0,
	 * if not then a level is missing
	 * that needs to be completed
	 * If that happens, "Oh
	 * My keyboard" or else
	 * "I become the guy"
	 */

	int k;
	for (int i=0; i < n; i++){
		if (lvls[i] != 0){
			k=0;
			break;
		}else
			k=1;
	}

	if (k == 0)
		cout << "Oh, my keyboard!";
	else
		cout << "I become the guy.";

}
