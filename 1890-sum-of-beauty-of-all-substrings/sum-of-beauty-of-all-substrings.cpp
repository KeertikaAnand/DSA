class Solution {
public:
    int beautySum(string s) {

        int ans = 0;

        for(int i = 0; i < s.size(); i++){
            int arr[26] = {0};

            for(int j = i; j < s.size(); j++){
                arr[s[j] - 'a']++;

                int maxfreq = 0;
                int minfreq = INT_MAX;

                for(int k = 0; k < 26; k++){
                    maxfreq = max(maxfreq, arr[k]);

                    if(arr[k] > 0)
                        minfreq = min(minfreq, arr[k]);
                }

                int beauty = maxfreq - minfreq;
                ans += beauty;
            }
        }

        return ans;
    }
};
