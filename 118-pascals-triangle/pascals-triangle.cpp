class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> pascal_triangle;

        for (int r = 0; r < numRows; r++) {
            pascal_triangle.push_back(rowscal(r));
        }

        return pascal_triangle;
    }

private:
    vector<int> rowscal(int row) {
        vector<int> result;
        long long ans = 1;

        result.push_back(ans);

        for (int i = 1; i <= row; i++) {
            ans = ans * (row - i + 1) / i;
            result.push_back(ans);
        }

        return result;
    }
};
