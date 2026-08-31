class Solution {
public:
    bool isValid(vector<int>& nums,int k, long long max){
        int split=1,subarray=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]+subarray <= max){
                subarray+=nums[i];
            }
            else{
                split++;
                subarray=nums[i];
                if(split>k)
                return false;
            }
        }
        return true;
    }
    int splitArray(vector<int>& nums, int k) {
        long long low=*max_element(nums.begin(), nums.end());
        long long high= accumulate(nums.begin(), nums.end(), 0LL);
        int ans=-1;
        while(low<=high){
            long long mid=low+(high-low)/2;
            if(isValid(nums,k,mid)){
                ans=mid;
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return ans;
        
    }
};