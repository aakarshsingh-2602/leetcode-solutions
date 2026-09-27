class Solution {
public:
    void get_subset(vector<int>& nums,vector<vector<int>>& subsets,  vector<int>& ans, int i){
        if(i==nums.size()){
            subsets.push_back(ans);
            return;        
        }
         
        ans.push_back(nums[i]);
        get_subset(nums, subsets, ans, i+1);

        ans.pop_back();
        int idx=i+1;
        while(idx<nums.size() && nums[idx]==nums[i])
        idx++;
         get_subset(nums, subsets, ans, idx);

    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>> subsets;
        vector<int> ans;
 
        get_subset(nums, subsets, ans, 0);
        return subsets;

    }
};