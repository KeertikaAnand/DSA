class Solution {
public:
    long long maximumScore(vector<int>& nums) {
        int n = nums.size();
        vector<int> suffixMin(n);

        suffixMin[n - 1] = nums[n - 1];
        for (int i = n - 2; i >= 0; i--) {
            suffixMin[i] = min(nums[i], suffixMin[i + 1]);
        }

        long long psum = 0, maxx = LLONG_MIN;

        for (int i = 0; i < n - 1; i++) {
            psum += nums[i];
            maxx = max(maxx, psum - suffixMin[i + 1]);
        }

        return maxx;
    }
};
