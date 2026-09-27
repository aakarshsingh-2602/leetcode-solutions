class Solution {
public:
    int fourSumCount(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3, vector<int>& nums4) {
        unordered_map<int,int> count;int c=0;
         for(int i: nums1){
            for(int j: nums2){
                count[i+j]++;
            }
         }
         for(int i:nums3){
            int target=0;
            for(int j: nums4){
                target= -(i+j);
                auto x=count.find(target);
                if(x!=count.end())
                c+=x->second;
            }
         }
         return c;
    }
};