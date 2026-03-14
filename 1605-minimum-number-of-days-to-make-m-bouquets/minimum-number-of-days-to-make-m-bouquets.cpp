class Solution {
public:
    bool possible(vector<int>& bloomDay, int m, int k,int mid){
        int cnt=0;
        int no=0;
        for(int i=0;i<bloomDay.size();i++){
            if(bloomDay[i]<=mid){
                cnt++;
            }
            else{
                no+=cnt/k;
                cnt=0;
            }
        }
        no+=cnt/k;
        return no>=m;
    }
    int minDays(vector<int>& bloomDay, int m, int k) {
        long n=bloomDay.size();
        if ((long long)m * k > n) return -1;
         int low=*min_element(bloomDay.begin(),bloomDay.end());
         int high=*max_element(bloomDay.begin(),bloomDay.end());
         while(low<=high){
            int mid=(low+high)/2;
            if(possible(bloomDay,m,k,mid)){
                high=mid-1;
            }
            else{
                low=mid+1;
            }
         }

        return low;
    }
};