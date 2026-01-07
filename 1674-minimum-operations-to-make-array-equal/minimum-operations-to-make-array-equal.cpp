class Solution {
public:
    int minOperations(int n) {
       /* vector<int> arr;
        int sum = 0;

        for(int i = 0; i < n; i++){
            int val = 2 * i + 1;
            arr.push_back(val);
            sum += val;
        }

        int target = sum / n;
        int op = 0;

        for(int i = 0; i < n; i++){
            op += abs(arr[i] - target);
        }

        return op / 2;*/
        return (n*n)/4;
    }
};
