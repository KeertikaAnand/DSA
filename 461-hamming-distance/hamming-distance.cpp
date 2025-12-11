class Solution {
public:
    int hammingDistance(int x, int y) {
        string s1=binaryConversion(x);
        string s2=binaryConversion(y);
        int n=max(s1.size(),s2.size());
        while(s1.size() < n) s1 = "0" + s1;
        while(s2.size() < n) s2 = "0" + s2;
        int cnt=0;
        for(int i=0;i<n;i++){
            if (s1[i]!=s2[i]){
                cnt++;
            }
        }
        return cnt;
    }

private:
    string binaryConversion(int n){
        
    if(n == 0) return "0";
    string ans = "";
    while(n > 0) {
        ans = char('0' + (n % 2)) + ans;
        n /= 2;
    }
    return ans;

    }
};