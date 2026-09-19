class Solution {
public:
    void subset(vector<int>& nums, vector<int>& current, vector<vector<int>>& result, int shuru){
        result.push_back(current);

        for(int i=shuru;i<nums.size();i++){
            current.push_back(nums[i]);
            subset(nums,current, result,i+1);
            current.pop_back();
        }

    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> result;
        vector<int> current;
        subset(nums, current, result, 0);
        return result;
    }
};
