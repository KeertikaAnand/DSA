class Solution {
public:
    int minPartitions(string n) {
        int greatest=0;
        for(int i=0;i<n.size();i++){
            int x=n[i]-'0';
            if(x>greatest){
                greatest=x;
            }
        }
        return greatest;
    }
};