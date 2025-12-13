class Solution {
public:
    vector<string> validateCoupons(vector<string>& code,
                                   vector<string>& businessLine,
                                   vector<bool>& isActive) {

        int n = code.size();
        unordered_map<string, int> priority = {
            {"electronics", 0},
            {"grocery", 1},
            {"pharmacy", 2},
            {"restaurant", 3}
        };

        regex pattern("^[a-zA-Z0-9_]+$");

        vector<pair<int, string>> validCoupons;

        for (int i = 0; i < n; i++) {
            if (!code[i].empty() &&
                regex_match(code[i], pattern) &&
                isActive[i] &&
                priority.count(businessLine[i])) {

                validCoupons.push_back({
                    priority[businessLine[i]],
                    code[i]
                });
            }
        }

        sort(validCoupons.begin(), validCoupons.end(),
             [](const auto& a, const auto& b) {
                 if (a.first != b.first)
                     return a.first < b.first;
                 return a.second < b.second;
             });

        vector<string> result;
        for (auto& p : validCoupons) {
            result.push_back(p.second);
        }

        return result;
    }
};