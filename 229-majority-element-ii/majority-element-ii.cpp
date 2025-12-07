class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
         unordered_map<int,int> mpp;
         vector <int> result;
        for(int num : nums){
            mpp[num]++;
        }
        for(auto& it:mpp){
            if(it.second > nums.size()/3){
                result.push_back(it.first);
            }
        }
        return result;
    }
};