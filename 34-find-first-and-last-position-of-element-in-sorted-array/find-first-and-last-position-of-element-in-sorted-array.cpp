class Solution {
public:
int lastoccurance(vector<int> arr,int k){
        int low=0;
        int high=arr.size()-1;
        int last=-1;
        while(low<=high){
            int mid=(high+low)/2;
            if(arr[mid]==k){
                last=mid;
                low=mid+1;
            }
            else if(arr[mid]<k){
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        return last;
    }
    int firstoccurance(vector<int> arr,int k){
        int low=0;
        int high=arr.size()-1;
        int first=-1;
        while(low<=high){
            int mid=(high+low)/2;
            if(arr[mid]==k){
                first=mid;
                high=mid-1;
            }
            else if(arr[mid]<k){
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        return first;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        int f=firstoccurance(nums,target);
        if(f==-1)return{-1,-1};
        int l=lastoccurance(nums,target);
        return {f,l};
    }
    
};