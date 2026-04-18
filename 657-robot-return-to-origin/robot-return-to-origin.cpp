class Solution {
public:
    bool judgeCircle(string moves) {
        int upcnt=0;
        int rlcnt=0;
        for(int i=0;i<moves.size();i++){
            if(moves[i]=='U'){
                upcnt++;
            }
            else if(moves[i]=='D'){
                upcnt--;
            }
            else if(moves[i]=='L'){
                rlcnt++;
            }
            else{
                rlcnt--;
            }
        }
        return (upcnt==0 && rlcnt==0);
    }
};