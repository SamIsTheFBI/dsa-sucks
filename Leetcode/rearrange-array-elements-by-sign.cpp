class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n = nums.size();
        int arr[n];

        int even=0, odd=1;
        for(int i=0; i < n; i++){
            if(nums[i] > 0){
                arr[even] = nums[i];
                even+=2;
            } else {
                arr[odd] = nums[i];
                odd+=2;
            }
        }

        vector<int> ans;
        for(int i=0; i < n; i++){
            ans.push_back(arr[i]);
        }

        return ans;
    }
};