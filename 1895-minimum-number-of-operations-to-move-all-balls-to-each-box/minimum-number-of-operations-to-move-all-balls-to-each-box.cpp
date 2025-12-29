class Solution {
public:
    vector<int> minOperations(string boxes) {
        vector <int> ans;
        for(int i=0;i<boxes.size();i++){
            int moves=0;
           
            for(int j=0;j<boxes.size();j++){
                if(boxes[j]=='1'){
                    moves+=abs(i-j);
                }
            }
            ans.push_back(moves);
            }
           
        
         return ans;
    }
};