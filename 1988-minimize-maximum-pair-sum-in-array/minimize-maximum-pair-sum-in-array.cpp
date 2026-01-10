class Solution {
public:
    int minPairSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int l=0;
        int r=nums.size()-1;
        int greatest=0;
        while(l<r){
            int sum=nums[l]+nums[r];
            if(sum>greatest){
                greatest=sum;
            }
            l++;
            r--;
        }
        return greatest;
    }
};