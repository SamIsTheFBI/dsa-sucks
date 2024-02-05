class Solution {
public:
    bool isPalindrome(string s) {
        if(s.size() == 1) return true;

        string str="";
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        for(auto ch: s){
            if(ch - 'a' < 26 && ch - 'a' >= 0) str += ch;
            else if(ch - 'a' > -50 && ch - 'a' < -39) str += ch;
        }

        string rev = str;

        reverse(rev.begin(), rev.end());
        for(int i=0; i < str.size(); i++){
            if(str[i] != rev[i]) return false;
        }

        return true;
    }
};