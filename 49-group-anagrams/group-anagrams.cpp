class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> result;
        unordered_map<string, vector<string>> sorted;
        sorted.reserve(strs.size());
        for(auto s: strs){
            auto key=s;
            sort(key.begin(),key.end());
            sorted[key].push_back(s);
        }
        for(auto i: sorted)
        result.push_back(i.second);
        return result;
    }

};