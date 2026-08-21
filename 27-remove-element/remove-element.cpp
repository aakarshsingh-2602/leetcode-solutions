class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int count=0,index=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=val){
            count++;
            nums[index]=nums[i];
            index++;
            }
        }
        return count;
    }
};