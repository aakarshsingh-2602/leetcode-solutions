class Solution {
public:
    void get_permutation(vector<int>& nums, vector<vector<int>>& result, int idx){
        if(idx==nums.size()){
            result.push_back(nums);
            return;
        }
        for(int i=idx; i<nums.size();i++){
            swap(nums[idx],nums[i]);
            get_permutation(nums, result, idx+1);
            swap(nums[idx],nums[i]);
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> result;

        get_permutation(nums,result,0);
        return result;
    }
};