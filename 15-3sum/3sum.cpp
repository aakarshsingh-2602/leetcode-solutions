class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        if(nums.size()<3)return {};
        vector<vector<int>> ans;
        
        for(int tar=0;tar<nums.size()-2;tar++){
            if(nums[tar]>0) break;

            if(tar>0 && nums[tar]==nums[tar-1]) continue;
            int i=tar+1;
            int j=nums.size()-1;
            while(i<j){
               int sum = nums[tar]+nums[i]+nums[j];
               if(sum==0){
                ans.push_back({nums[tar],nums[i],nums[j]});

                while(i<j && nums[i]==nums[i+1])i++;
                while(i<j && nums[j]==nums[j-1])j--;

                i++;
                j--;
                
               } 
               else if(sum<0)
               i++;
               else
               j--;
            }

        }
        return ans;
    }
};