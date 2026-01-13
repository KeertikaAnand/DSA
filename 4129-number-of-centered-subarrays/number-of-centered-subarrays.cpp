class Solution {
public:
    int centeredSubarrays(vector<int>& nums) {
       
        int cnt = 0;

        for (int i = 0; i < nums.size(); i++) {
            int sum = 0;
            unordered_map<int,int> mpp;

            for (int j = i; j < nums.size(); j++) {
                sum += nums[j];
                mpp[nums[j]]++;

                if (mpp.count(sum)) {
                    cnt++;
                }
            }
        }
        return cnt;
    }
};
