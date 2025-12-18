class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        for(auto x:words){
           string rev = x;                 
            reverse(rev.begin(), rev.end()); 
            
            if (x == rev){
                return x;
            }
        }
        return "";
    }
};