class Solution {
public:
    int countDigitOccurrences(vector<int>& nums, int digit) {
        int counter=0;
        for(int i=0;i<nums.size();i++){
            for(int j=nums[i];j>0;j/=10){
               if(j%10==digit) counter++;
            }
        }
        return counter;
    }
};