class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        int prev = 0;
        int ans = 0;

        for (int i = 0; i < bank.size(); i++) {
            int curr = 0;

            for (char s : bank[i]) {
                if (s == '1') curr++;
            }

            if (curr > 0) {
                ans += prev * curr;
                prev = curr;
            }
        }

        return ans;
    }
};
