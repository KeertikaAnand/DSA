class Solution {
public:
    long long minimumCost(vector<int>& nums, int k, int dist) {
        int n = nums.size();
        multiset<long long> small, large;
        long long sumSmall = 0, ans = LLONG_MAX;

        auto add = [&](long long x) {
            if (small.size() < k - 1) {
                small.insert(x);
                sumSmall += x;
            } else if (!small.empty() && x < *small.rbegin()) {
                large.insert(*small.rbegin());
                sumSmall -= *small.rbegin();
                small.erase(prev(small.end()));
                small.insert(x);
                sumSmall += x;
            } else {
                large.insert(x);
            }
        };

        auto remove = [&](long long x) {
            if (small.find(x) != small.end()) {
                small.erase(small.find(x));
                sumSmall -= x;
                if (!large.empty()) {
                    auto it = large.begin();
                    small.insert(*it);
                    sumSmall += *it;
                    large.erase(it);
                }
            } else {
                large.erase(large.find(x));
            }
        };

        for (int i = 1; i <= dist + 1; i++) add(nums[i]);
        ans = sumSmall;

        for (int i = dist + 2; i < n; i++) {
            remove(nums[i - dist - 1]);
            add(nums[i]);
            ans = min(ans, sumSmall);
        }

        return nums[0] + ans;
    }
};
