class Solution {
public:
    int minPartitions(string n) {
        int greatest=0;
        for(int i=0;i<n.size();i++){
            if(n[i]>greatest){
                greatest=n[i];
            }
        }
        return greatest-'0';
    }
};