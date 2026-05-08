class Solution {
public:
    int findLengthOfLCIS(vector<int>& nums) {
        int cnt=1;
        int len=1;
        for(int i=1;i<nums.size();i++){
            if(nums[i]>nums[i-1]){
                cnt++;
            }
            else{
                len=max(len,cnt);
                cnt=1;
            }
        }
        len=max(len,cnt);
        return len;
    }
};