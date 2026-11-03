class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int minSub=INT_MAX, currMin=0;
        int total=0;
        int maxSub=INT_MIN, currMax=0;
        for(int x:nums){
            currMax=max(x, currMax+x);
            maxSub=max(currMax,maxSub);

            currMin=min(x,currMin+x);
            minSub= min(currMin, minSub);

            total+=x;
        }
        if(maxSub<0)
        return maxSub;
       
        return max(total-minSub, maxSub);
    }
};