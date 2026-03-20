class Solution {
public:
int divide(int dividend, int divisor) {
    if (divisor == 0) return INT_MAX;
    if (dividend == INT_MIN && divisor == -1) return INT_MAX;

    long long dvd = llabs((long long)dividend);
    long long dvs = llabs((long long)divisor);

    long long ans = 0;

    while (dvd >= dvs) {
        long long temp = dvs;
        long long multiple = 1;

        while (dvd >= (temp << 1)) {
            temp <<= 1;
            multiple <<= 1;
        }

        dvd -= temp;
        ans += multiple;
    }

    // Apply sign safely
    if ((dividend < 0) ^ (divisor < 0))
        ans = -ans;

    // Clamp to int range
    if (ans > INT_MAX) return INT_MAX;
    if (ans < INT_MIN) return INT_MIN;

    return (int)ans;
}


};