class Solution {
public:
    bool isAnagram(string s, string t) {
        //string merge = s.append(t);
        map<char, int> mp1;
        map<char, int> mp2;

        for(int i=0; i<s.size(); i++){
             mp1[s[i]]++;
        }

         for(int i=0; i<t.size(); i++){
             mp2[t[i]]++;
        }

        //  for (auto &p : mp1) {
        //     cout << p.first << " -> " << p.second << "\n";
        // }

       return mp1 == mp2;


    }
};
