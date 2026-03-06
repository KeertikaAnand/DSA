class Solution {
public:
    string removeOuterParentheses(string s) {
        string result="";
        int cnt=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='('){
                if(cnt>0){
                    result+='(';
                    
                }
                cnt++;
            }
             if(s[i]==')'){
                cnt--;
                if(cnt>0){
                    result+=')';
                    
                }
            }

        }
        return result;
        
    }
};