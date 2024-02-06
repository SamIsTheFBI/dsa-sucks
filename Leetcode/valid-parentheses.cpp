class Solution {
public:
    bool isValid(string s) {
        string close="", all="";
        for(char ch: s){
            all += ch;
            if(ch == '(') close += ')';
            if(ch == '{') close += '}';
            if(ch == '[') close += ']';

            int n = close.size();
            if(n && close[n-1] == ch){
                close.pop_back();
                all.pop_back();
                all.pop_back();
            }
        }

        if(!all.size()) return true;
        else return false;
    }
};