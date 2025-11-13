class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        int nsum= (n*(n+1))/2;
        int summ=0;
        for (int i=0;i<n;i++){
            summ+=nums[i];
        }
        return nsum-summ;
    }
};