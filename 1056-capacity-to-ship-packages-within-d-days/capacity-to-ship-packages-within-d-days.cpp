class Solution {
public:
  bool possible(vector<int>& weights, int days,int mid){
        
        int no=0;
        int summ=0;
        for(int i=0;i<weights.size();i++){
             summ+=weights[i];
            if(summ>mid){
                no++;
                summ=weights[i];
            }
            
        }
        no++;
        return no<=days;
    }
    int shipWithinDays(vector<int>& weights, int days) {
         long n=weights.size();
       
         int low=*max_element(weights.begin(),weights.end());
         int high=accumulate(weights.begin(),weights.end(),0);
         while(low<=high){
            int mid=(low+high)/2;
            if(possible(weights,days,mid)){
                high=mid-1;
            }
            else{
                low=mid+1;
            }
         }

        return low;
    }
};