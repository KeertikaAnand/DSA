class Solution {
public:
    vector<string> invalidTransactions(vector<string>& transactions) {
        int n = transactions.size();
        
        vector<vector<string>> parsed(n);
        unordered_map<string, vector<int>> mp;
        
        for(int i = 0; i < n; i++){
            stringstream ss(transactions[i]);
            string temp;
            
            while(getline(ss, temp, ',')){
                parsed[i].push_back(temp);
            }
            
            mp[parsed[i][0]].push_back(i);
        }
        
        vector<bool> invalid(n, false);
        
        for(auto &it : mp){
            vector<int> &idx = it.second;
            
            sort(idx.begin(), idx.end(), [&](int a, int b){
                return stoi(parsed[a][1]) < stoi(parsed[b][1]);
            });
            
            for(int i = 0; i < idx.size(); i++){
                int i_idx = idx[i];
                int time_i = stoi(parsed[i_idx][1]);
                int amount_i = stoi(parsed[i_idx][2]);
                
                if(amount_i > 1000){
                    invalid[i_idx] = true;
                }
                
                for(int j = i + 1; j < idx.size(); j++){
                    int j_idx = idx[j];
                    int time_j = stoi(parsed[j_idx][1]);
                    
                    if(time_j - time_i > 60) break;
                    
                    if(parsed[i_idx][3] != parsed[j_idx][3]){
                        invalid[i_idx] = true;
                        invalid[j_idx] = true;
                    }
                }
            }
        }
        
        vector<string> result;
        for(int i = 0; i < n; i++){
            if(invalid[i]){
                result.push_back(transactions[i]);
            }
        }
        
        return result;
    }
};
