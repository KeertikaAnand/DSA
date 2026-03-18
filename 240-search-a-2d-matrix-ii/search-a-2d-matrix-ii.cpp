class Solution {
public:
    bool findindex(vector<int> & arr,int key,int m){
        int low=0;
        int high=m-1;

        while(low<=high){
            int mid=low+(high-low)/2;
            if(arr[mid]==key){
                return true;
            }
            else if(arr[mid]>key){
                high=mid-1;
            }

            else{
                low=mid+1;
            }
        }
        return false;
    }
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n=matrix.size();
        int m=matrix[0].size();

        for(int i=0;i<n;i++){
            
            if(findindex(matrix[i],target,m)){
                return true; 
            }
        }
        return false;

    }
};