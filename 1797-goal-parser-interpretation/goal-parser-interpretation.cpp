class Solution {
public:
    string interpret(string command) {
        int n=command.size();
        int i=0;
        string ans="";
        while(i<n){
            if(command[i]=='G'){
                ans+='G';
                i++;
            }
            else if(command[i]=='(' and command[i+1]==')'){
                ans+='o';
                i=i+2;
            }
            else{
                ans+="al";
                i=i+4;
            }
        }
        return ans;
    }
};