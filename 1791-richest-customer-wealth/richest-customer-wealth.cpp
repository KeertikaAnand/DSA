class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int greatest=0;
        for(int i=0;i<accounts.size();i++){
            int local=0;
            for(int j=0;j<accounts[0].size();j++){
                local+=accounts[i][j];
            }
            if(local>greatest){
                greatest=local;
            }
        }
        return greatest;
    }
};