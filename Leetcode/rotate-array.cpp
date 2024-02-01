class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        vector<int> pre;
        int n = int(nums.size());
        if(n==1){
            return;
        }

        while(n < k){
            k = k - n;
        }

        for(int i=n-k; i < n; i++){
            pre.push_back(nums[i]);
        }
        for(int i=n-1; i - k >= 0; i--){
            nums[i] = nums[i-k];
        }
        for(int i=0; i < k; i++){
            nums[i] = pre[i];
        }
    }
};