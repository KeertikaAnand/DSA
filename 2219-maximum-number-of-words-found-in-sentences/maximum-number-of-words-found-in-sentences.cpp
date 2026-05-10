class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int maxx=0;
        for(int i=0;i<sentences.size();i++){
            string str=sentences[i];
              
        stringstream ss(str);
        string word;
        int count = 0;

    while (ss >> word) {
        count++;
    }
    maxx=max(count,maxx);
        }
        return maxx;
    }
};