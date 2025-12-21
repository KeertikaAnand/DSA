class Solution {
public:
    vector<int> transformArray(vector<int>& nums) {
        int evencnt=0;
        int oddcnt=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]%2==0){
                evencnt++;
            }
            else{
                oddcnt++;
            }
        }
        vector<int> a(evencnt, 0);
        vector<int> b(oddcnt, 1);
        a.insert(a.end(), b.begin(), b.end());
        return a;
    }
};