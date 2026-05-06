class Solution {
public:
    int maximizeSum(vector<int>& nums, int k) {
        int sum=0;
        int maxx=*max_element(nums.begin(),nums.end());
        for(int i=0;i<k;i++){
            sum+=maxx;
            
            maxx=maxx+1;
            
        }
        return sum;
    }
};