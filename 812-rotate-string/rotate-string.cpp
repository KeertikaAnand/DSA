class Solution {
public:
    bool rotateString(string s, string goal) {

        if(s.size() != goal.size())
            return false;

        for(int i=0;i<s.size();i++){

            string s1 = s.substr(0,i);
            string s2 = s.substr(i);

            string result = s2 + s1;

            if(result == goal)
                return true;
        }

        return false;
    }
};
