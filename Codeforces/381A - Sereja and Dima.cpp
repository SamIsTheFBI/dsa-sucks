#include <bits/stdc++.h>
using namespace std;

int main () {
	int n, s=0, d=0, k=0;
	cin >> n;
	int arr[n];

	for (int i=0; i < n; i++){
		cin >> arr[i];
	}

	/* 
	 * Initiate a loop with i=n (size of array)
	 * t=1 (number of turns) and increase t (number of turns)
	 * & decrease i (size of array) after each turn
	 *
	 * Using int k to store the maximum number 
	 *
	 * If rightmost card (arr[i-1]) is picked, then 
	 * just decreasing size of array is enough.
	 *
	 * If leftmost card (arr[0]) is picked, then 
	 * shift all arr elements to one block left, 
	 * and then finally decrease array size.
	 */

	for (int i=n, t=1; i != 0; i--, t++){
		if (arr[i-1] > arr[0]){
			k=arr[i-1];
		}else{
			k=arr[0];
			int j=0;
			while(j < i-1){
				arr[j] = arr[j+1];
				j++;
			}
		}

		/* 
		 * Using var t to check for even turns.
		 * Sejera will have odd turns &
		 * Dima will have even turns.
		 */

		if(t % 2 != 0)
			s+=k;
		else
			d+=k;
	}

	cout << s << " " << d << endl;
}
