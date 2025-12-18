class Solution {
public:
    bool canAliceWin(vector<int>& nums) {
        int singled=0;
        int doubled=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]<10){
                singled+=nums[i];
            }
            else{
                doubled+=nums[i];
            }
        }
        if(singled==doubled){
            return false;
        }
        else{
            return true;
        }
    }
};