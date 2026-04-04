class Solution {
public:
    vector<string> findarray(string &sentence){
        vector<string> ans;
        string word = "";
        
        for(int i = 0; i < sentence.size(); i++){
            if(sentence[i] != ','){
                word += sentence[i];
            }
            else{
                ans.push_back(word);
                word = "";
            }
        }
        ans.push_back(word);
        return ans;
    }

    vector<string> invalidTransactions(vector<string>& transactions) {
        int n = transactions.size();
        
        vector<vector<string>> parsed(n);
        
        for(int i = 0; i < n; i++){
            parsed[i] = findarray(transactions[i]);
        }
        
        vector<bool> invalid(n, false);
        
        for(int i = 0; i < n; i++){
            int amount_i = stoi(parsed[i][2]);
            int time_i = stoi(parsed[i][1]);
            
            if(amount_i > 1000){
                invalid[i] = true;
            }
            
            for(int j = 0; j < n; j++){
                if(i == j) continue;
                
                int time_j = stoi(parsed[j][1]);
                
                if(parsed[i][0] == parsed[j][0] &&
                   abs(time_i - time_j) <= 60 &&
                   parsed[i][3] != parsed[j][3]) {
                    invalid[i] = true;
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
