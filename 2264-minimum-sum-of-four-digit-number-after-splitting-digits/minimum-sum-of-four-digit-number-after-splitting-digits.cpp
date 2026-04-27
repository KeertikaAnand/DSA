class Solution {
public:
    int minimumSum(int num) {
        vector <int> arr;
        while(num>0){
            int temp=num%10;
            arr.push_back(temp);
            num=num/10;
        }
        sort(arr.begin(),arr.end());
        int ans=0;
        ans+=arr[0]*10;
        ans+=arr[1]*10;
        ans+=arr[2];
        ans+=arr[3];
        return ans;
    }
};