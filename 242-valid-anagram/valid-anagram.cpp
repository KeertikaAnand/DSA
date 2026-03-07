class Solution {
public:
    bool isAnagram(string s, string t) {
         unordered_map<char,int> mpp1;
        unordered_map<char,int> mpp2;
        if(s.size()!=t.size()){
            return false;
        }
        else{
            
            for(int i =0;i<s.size();i++){
                mpp1[s[i]]++;
                mpp2[t[i]]++;
            
        }
       for(auto it:mpp1 ){
        if(it.second!=mpp2[it.first]){
            return false;
        }
       }
        }
       return true;
    }
};