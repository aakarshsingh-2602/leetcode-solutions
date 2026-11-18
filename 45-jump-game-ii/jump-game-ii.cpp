class Solution {
public:
    int jump(vector<int>& nums) {
        int jumps=0;
        int current=0;
        int longest=0;

        for(int i=0;i<nums.size()-1;i++){

            longest=max(longest, i+nums[i]);

            if(i==current){
                jumps++;
                current=longest;
            }

            if(current>=nums.size()-1) break;
        }
        return jumps;
    }
};