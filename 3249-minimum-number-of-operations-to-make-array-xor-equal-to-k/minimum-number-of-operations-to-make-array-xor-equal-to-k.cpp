class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int xor_num=0;
        for(int i=0;i<nums.size();i++){
            xor_num=xor_num^nums[i];
        }
        int diff = xor_num ^ k;
        return __builtin_popcount(diff);
    }
};