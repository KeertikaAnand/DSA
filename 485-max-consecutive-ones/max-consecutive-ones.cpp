class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
       vector <int> countvector;
       int cntr=0;
       for(int j=0;j<nums.size();j++){
        if(nums[j]==1){
            cntr++;
        }
        else{
            countvector.push_back(cntr);
            cntr=0;
        }
       } 
       countvector.push_back(cntr);
        return *max_element(countvector.begin(), countvector.end());
    }
   
};