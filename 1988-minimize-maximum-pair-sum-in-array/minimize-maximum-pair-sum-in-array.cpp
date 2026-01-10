class Solution {
public:
    int minPairSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int l=0;
        int r=nums.size()-1;
        int greatest=0;
        while(l<r){
           
                greatest=max(greatest,nums[l]+nums[r]);
            
            l++;
            r--;
        }
        return greatest;
    }
};