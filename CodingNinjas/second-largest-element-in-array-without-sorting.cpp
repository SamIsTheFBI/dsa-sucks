vector<int> getSecondOrderElements(int n, vector<int> a) {
    // Write your code here.
    int maxm = 0, secondMax = 0;
    int minm = 1000000000, secondMin = 1000000000;
    vector<int> ans;
    
    for(int i=0; i < n; i++){
        if(a[i] > maxm){
            secondMax = maxm;
            maxm = a[i];
        }
        if(a[i] < maxm && a[i] > secondMax){
            secondMax = a[i];
        }
        if(a[i] < minm) {            
            secondMin = minm;
            minm = a[i];
        }
        if(a[i] > minm && a[i] < secondMin){
            secondMin = a[i];
        }
    }

    ans.push_back(secondMax);
    ans.push_back(secondMin);
    return ans;
}
