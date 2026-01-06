class Solution {
public:
    string findDifferentBinaryString(vector<string>& nums) {
        int n = nums.size();

        for(int i = 0; i < (1 << n); i++){
            bitset<16> b(i);               
            string s = b.to_string().substr(16-n); 
            if(find(nums.begin(), nums.end(), s) == nums.end()){
                return s;
            }
        }

        return "";
    }
};
