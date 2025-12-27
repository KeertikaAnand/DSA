class Solution {
public:
    bool checkIfPangram(string sentence) {
        vector<int> freq(26, 0);

        if (sentence.size() < 26) return false;

        for (int i = 0; i < sentence.size(); i++) {
            char c = sentence[i];
            freq[c - 'a'] = 1;  
        }

        for (int i = 0; i < 26; i++) {
            if (freq[i] == 0) return false;
        }

        return true;
    }
};
