class Solution {
public:
    int numOfPairs(vector<string>& nums, string target) {
        int cnt = 0;

        for(int i = 0; i < nums.size(); i++) {
            for(int j = 0; j < nums.size(); j++) {
                if(i != j) {
                    string ans = nums[i] + nums[j];
                    if(ans == target) {
                        cnt++;
                    }
                }
            }
        }

        return cnt;
    }
};
