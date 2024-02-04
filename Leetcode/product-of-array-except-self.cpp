class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int prod = 1, k=0;
        for(auto x: nums){
            if(!x) {
                k++;
                continue;
            }
            prod *= x;
        }

        int fakeProd = 0;
        if(k) {
            if(k < 2) fakeProd = prod;
            prod = 0;
        }
        vector<int> ans;
        for(auto x: nums){
            if(x) ans.push_back(prod/x);
            else ans.push_back(fakeProd);
        }

        return ans;
    }
};