class Solution {
public:
    int maxCoins(vector<int>& piles) {
        sort(piles.begin(),piles.end());
        int n=piles.size();
        int k=n/3;
        int p=n-2;
        int coins=0;
        for(int i=0;i<k;i++){
            coins+=piles[p];
            p=p-2;
        }
        return coins;
    }
};