class Solution {
public:
    bool hasAlternatingBits(int n) {
        if(n == 0) return false;

        string binary;

        while(n > 0){
            binary = char((n % 2) + '0') + binary;
            n = n / 2;
        }

        for(int i = 0; i < binary.size() - 1; i++){
            if(binary[i] == binary[i + 1]){
                return false;
            }
        }

        return true;
    }
};
