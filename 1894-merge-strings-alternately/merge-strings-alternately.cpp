class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int len1 = word1.size();
        int len2 = word2.size();
        int w = 0;
        string ans = "";

        while (w < len1 && w < len2) {
            ans += word1[w];
            ans += word2[w];
            w++;
        }

        if (len1 > len2) {
            ans += word1.substr(w, len1 - w);
        } else {
            ans += word2.substr(w, len2 - w);
        }

        return ans;
    }
};
