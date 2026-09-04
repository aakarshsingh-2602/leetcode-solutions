class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int count1 = 0, count2 = 0;
        int c1 = 0, c2 = 0;
        vector<int> integer;
        int n = nums.size();

        for(int i = 0; i < n; i++) {
            if(nums[i] == c1) {
                count1++;
            } 
            else if(nums[i] == c2) {
                count2++;
            } 
            else if(count1 == 0) {
                c1 = nums[i];
                count1 = 1; 
            } 
            else if(count2 == 0) {
                c2 = nums[i];
                count2 = 1;
            } 
            else {
                count1--;
                count2--;
            }
        }

        count1 = 0; count2 = 0;
        for(int i = 0; i < n; i++) {
            if(c1 == nums[i]) {
                count1++;
            } 
            else if(c2 == nums[i]) {
                count2++;
            }
        }
        
        if(count1 > n / 3) integer.push_back(c1);
        if(count2 > n / 3) integer.push_back(c2);

        return integer;
    }
};