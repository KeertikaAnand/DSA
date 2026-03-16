class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector <int> tot=nums1;
        tot.insert(tot.end(),nums2.begin(),nums2.end());
        sort(tot.begin(),tot.end());
        int n=tot.size();
        int a=n/2;
        if(n%2==1){
            return tot[a];
        }
        else{
            return float(tot[a]+tot[a-1])/2;
        }
    }
};