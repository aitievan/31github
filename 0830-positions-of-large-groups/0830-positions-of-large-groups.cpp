class Solution {
public:
    vector<vector<int>> largeGroupPositions(string S) {
        int start = 0, end = 0;
        vector<vector<int>> ans;
        
        for(int end = 0; end < S.size(); end++){
            //check for a group when the string ends
            if(end == S.size()-1 || S[end] != S[end+1]){
                //deal with old group
                if(end-start+1 >= 3){
                    ans.push_back(vector<int> {start, end});
                }
                //update for new group
                start = end+1;
            }
        }
        
        return ans;
    }
};