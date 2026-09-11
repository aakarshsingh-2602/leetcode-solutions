class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int> disappeared;
        int n=nums.size();
        vector<int> h(n+1,false);
        for(int i=0;i<n;i++)
        {
            h[nums[i]]=true;;
        }
        for(int i=1;i<=n;i++){
            if(!h[i])
            disappeared.push_back(i);
        }
        return disappeared;
    }
};