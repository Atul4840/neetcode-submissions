class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int, int>mp; // value,count
        for(auto &n : nums){
            mp[n]++;
        }
        vector<int> ans;

        while (k--) {
            int maxFreq = INT_MIN;
            int element = -1;

            for (auto &p : mp) {
                if (p.second > maxFreq) {
                    maxFreq = p.second;
                    element = p.first;
                }
            }

            ans.push_back(element);
            mp[element] = INT_MIN; 
        }

        return ans;

    }
};
