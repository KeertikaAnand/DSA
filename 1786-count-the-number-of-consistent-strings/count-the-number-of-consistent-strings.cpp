class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {

        unordered_map<char,int> mpp;

        for(char c : allowed){
            mpp[c]++;
        }

        int count = 0;

        for(string word : words){

            bool valid = true;

            for(char c : word){
                if(mpp[c] == 0){
                    valid = false;
                    break;
                }
            }

            if(valid){
                count++;
            }
        }

        return count;
    }
};
