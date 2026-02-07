class Solution {
public:
    int minimumDeletions(string s) {
        stack<pair<int,int>> st;
        st.push({0, 0}); 

        for (char c : s) {
            auto top = st.top();
            st.pop();

            int bCount = top.first;
            int deletions = top.second;

            if (c == 'b') {
                st.push({bCount + 1, deletions});
            } else { // c == 'a'
                int deleteA = deletions + 1;
                int deleteB = bCount;
                st.push({bCount, min(deleteA, deleteB)});
            }
        }
        return st.top().second;
    }
};
