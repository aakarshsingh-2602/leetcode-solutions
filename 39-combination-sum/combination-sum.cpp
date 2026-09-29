class Solution {
public:
    void combination(vector<int>& candidates, vector<vector<int>> & ans, int target, vector<int> &sum, int i){
        if(target==0){
            ans.push_back(sum);
            return;
        }
        for(int x=i; x<candidates.size(); x++){
            if(candidates[x]>target)break;
            sum.push_back(candidates[x]);

            combination(candidates, ans, target-candidates[x], sum, x);

            sum.pop_back();
        }


    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> sum;
        sort(candidates.begin(),  candidates.end());
        combination(candidates, ans, target, sum, 0);
        return ans;
    }
};