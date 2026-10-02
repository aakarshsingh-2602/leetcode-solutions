class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int minimum=INT_MAX;
        int left=0;
        int sum=0;
        for(int right=0;right<nums.size();right++){
            sum+=nums[right];
            while(sum>=target){
                minimum=min(minimum,right-left+1);
                sum-=nums[left];
                left++;
            }

        }
        if(minimum!=INT_MAX)
        return minimum;
        else 
        return 0;
    }
};