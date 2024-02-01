class Solution {
public:
    void moveZeroes(vector<int>& nums) {
    int n = int(nums.size());
    int i = 0, j=1;
    
    for(i=0; i < n; i++){
        if(nums[i] == 0) break;
    }

    if(i >= n) return;

    while(nums[i] == 0){
        if(i+j > n - 1) break;
        // swap
        int tmp = nums[i+j];
        nums[i+j] = nums[i];
        nums[i] = tmp;

        if(nums[i] != 0) i++;
        else j++; 
    }
    }
};