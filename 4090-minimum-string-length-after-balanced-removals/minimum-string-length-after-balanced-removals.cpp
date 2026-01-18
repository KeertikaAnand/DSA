class Solution {
public:
    int minLengthAfterRemovals(string s) {
        int a_count=0;
        int b_count=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='a'){
                a_count++;
            }
            else{
                b_count++;
            }
        }
        return abs(a_count-b_count);
    }
};