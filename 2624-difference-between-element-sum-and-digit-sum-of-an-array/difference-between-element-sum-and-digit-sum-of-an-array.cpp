class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int digitsum=0;
        int total_sum=0;
        for(int i=0;i<nums.size();i++){
            total_sum+=nums[i];
            if(nums[i]<10){
                digitsum+=nums[i];
            }
            else{
                while(nums[i]>0){
                    int temp=nums[i]%10;
                    digitsum+=temp;
                    nums[i]=nums[i]/10;
                }
            }
        }
        return abs(total_sum-digitsum);
    }
};