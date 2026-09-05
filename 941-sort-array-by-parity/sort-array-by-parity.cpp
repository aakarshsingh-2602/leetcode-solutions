class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int n=nums.size();
        vector<int> arr(n);
        int i=0,j=nums.size()-1;
        for(int k=0;k<n;k++){
            if(nums[k]%2==0){
            arr[i]=nums[k];
            i++;
            }
            else{
                arr[j]=nums[k];
                j--;
            }
        }
        return arr;
    }
};