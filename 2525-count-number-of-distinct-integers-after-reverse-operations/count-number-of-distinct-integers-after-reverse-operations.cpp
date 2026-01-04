class Solution {
public:
    int countDistinctIntegers(vector<int>& nums) {
       unordered_set<int> st;

        // insert original numbers
        for(int x : nums){
            st.insert(x);
        }

        // insert reversed numbers
        for(int x : nums){
            string s = to_string(x);
            reverse(s.begin(), s.end());
            int rev = stoi(s);
            st.insert(rev);
        }

        return st.size();
    }
};