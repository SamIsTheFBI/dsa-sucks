class Solution {
public:
    int lengthOfLastWord(string s) {
        int cnt = 0, i;
        for(i=int(s.size()) - 1; i >= 0; i--){
            if(s[i] == ' ') 
                continue; 
            else 
                break;
        }
        
        for(; i >= 0; i--){
            if(s[i] != ' '){
                cnt++;
            } else {
                break;
            }
        }

        return cnt;
    }
};