class Solution {

    void sum(int start, int target, vector<int>& candidates, vector<vector<int>> &result, vector<int> ans ){
         if(target==0){
            result.push_back(ans);
            return ;
        }
        for(int i=start;i<candidates.size();i++){

            if(i>start && candidates[i]==candidates[i-1])
            continue;

            if(candidates[i]>target)
            break;

            ans.push_back(candidates[i]);
            sum(i+1, target-candidates[i], candidates, result, ans);
            ans.pop_back();
        }

    }
public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<vector<int>> result;
        vector<int> ans;
        sort(candidates.begin(),candidates.end());

        sum(0, target, candidates, result, ans);

        return result;
    }
};