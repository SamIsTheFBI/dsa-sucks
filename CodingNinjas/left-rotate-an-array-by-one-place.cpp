#include <bits/stdc++.h> 
vector<int> rotateArray(vector<int>& arr, int n) {
    // Write your code here.
    int last = arr[0];
    for(int i=0; i < n; i++){
        if(i==n-1){
            arr[i] = last;
            break;
        }
        arr[i] = arr[i+1];
    }

    return arr;
}
