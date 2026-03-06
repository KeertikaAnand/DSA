class Solution {
public:
    string reverseWords(string s) {
        vector<string> words;
        string temp="";
        string result="";
        for(char ch:s){
            if(ch != ' '){
                temp+=ch;
            }
            else{
                if(temp!=""){
                    words.push_back(temp);
                    temp="";
                }
            }
        }
        if(temp!="") words.push_back(temp);
        reverse(words.begin(),words.end());
        for(int i=0;i<words.size();i++){
            result+=words[i];
            if(i!=words.size()-1)result+=' ';
        }
        return result;
                    
    }
};