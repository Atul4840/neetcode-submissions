class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<string, vector<string>>mps;
        for(int i=0; i<strs.size(); i++){
            string sortedstring = strs[i];
            sort(sortedstring.begin(), sortedstring.end());
            mps[sortedstring].push_back(strs[i]);
        }

        vector<vector<string>>ans;
        for(auto& pair : mps){
            ans.push_back(pair.second);
        }

        return ans;
    }
};
