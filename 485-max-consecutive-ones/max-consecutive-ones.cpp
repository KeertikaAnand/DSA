class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int cntr = 0;
        int maxCount = 0;

        for (int j = 0; j < nums.size(); j++) {
            if (nums[j] == 1) {
                cntr++;
                maxCount = max(maxCount, cntr);
            } else {
                cntr = 0;  
            }
        }

        return maxCount;
    }
};
