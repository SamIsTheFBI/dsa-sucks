class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        if(n==2) return min(height[0], height[1]);

        int maxm = 0;
        for(int i=0, j=n-1; i < j;){
            int dist = j - i;
            int ht = min(height[i], height[j]);
            int ar = ht * dist--;
            maxm = max(ar, maxm);
            if(height[i] < height[j]) i++;
            else j--;
        }

        return maxm;
    }
};