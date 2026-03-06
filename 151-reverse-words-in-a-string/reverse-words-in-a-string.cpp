class Solution {
public:
    string reverseWords(string s) {
        vector<string> words;
        stringstream ss(s);
        string temp;
        string result="";
         while(ss >> temp){
            words.push_back(temp);
         }
       
       
        reverse(words.begin(),words.end());
        for(int i=0;i<words.size();i++){
            result+=words[i];
            if(i!=words.size()-1)result+=' ';
        }
        return result;
                    
    }
};