class Solution {
public:
    int mirrorDistance(int n) {
        int revno=0;
        int no=n;
        while(no>0){
            revno=revno*10+no%10;
            no=no/10;
        }
        cout<<revno;
        return abs(n-revno);
    }
};