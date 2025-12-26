class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int xor_num=0;
         for(int num: nums){
            xor_num ^= num;
        }
        int diff = xor_num ^ k;
        return __builtin_popcount(diff);
    }
};