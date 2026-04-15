class Solution {
public:
    int reverseDegree(string s) {
        int finala = 0;
        
        for (int i = 0; i < s.size(); i++) {
            int val = 'z' - s[i] + 1;
            int ans = val * (i + 1);
            finala += ans;
        }
        
        return finala;
    }
};
