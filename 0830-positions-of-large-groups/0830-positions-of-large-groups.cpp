class Solution {
public:
    vector<vector<int>> largeGroupPositions(string S) {
        int start = 0, end = 0;
        vector<vector<int>> ans;
        
        for(int end = 0; end < S.size(); end++){
            if(end == S.size()-1 || S[end] != S[end+1]){
                if(end-start+1 >= 3){
                    ans.push_back(vector<int> {start, end});
                }
                start = end+1;
            }
        }
        
        return ans;
    }
};