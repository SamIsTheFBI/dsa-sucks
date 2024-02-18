class Solution {
public:
    int furthestBuilding(vector<int>& heights, int bricks, int ladders) {
        int n = heights.size();

        priority_queue<int> pq;
        int i = 0, height = 0;
        for(i = 0; i < n - 1; i++){
            height = heights[i+1] - heights[i];

            if(height <= 0) continue;

            bricks -= height;
            pq.push(height);

            if(bricks < 0){
                bricks += pq.top();
                pq.pop();
                ladders--;
            }

            if(ladders < 0) break;
        }

        return i;
    }
};