class Solution {
public:
    int maxDistinct(string s) {
        unordered_set <char> uniq;

        for(char c : s){
            uniq.insert(c);
        }

        return uniq.size();
    }
};