class Solution {
public:
    vector<int> countPoints(vector<vector<int>>& points, vector<vector<int>>& queries) {
        vector<int> ans;
        for(int i=0;i<queries.size();i++){
        int x=queries[i][0];
        int y=queries[i][1];
        int r=queries[i][2];
        int count=0;
        for(int j=0;j<points.size();j++){
            int a=points[j][0];
            int b=points[j][1];
            int dist = (x - a) * (x - a) + (y - b) * (y - b);
            int rad = r * r;

                if(dist <= rad){
                count++;
            }
        }
        ans.push_back(count);

        }
        return ans;
    }
};