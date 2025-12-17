class Solution {
public:
    int countDigits(int num) {
         int cnt=0;
         int n=num;
        while(num>0){
            int temp=num%10;
            if(temp!=0 && n%temp==0){
                cnt++;
            }
            num=num/10;
        }
       
       return cnt;
    }
};