class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        int n=nums.size();
        vector<int> newnums(2*nums.size());
        for(int i=0;i<n;i++){
            newnums[i]=nums[i];
            newnums[i+n]=nums[i];
        }

        vector<int> nge(n,-1);
        stack<int> s;

        for(int i=2*n-1; i>=0;i--){

            while(!s.empty() && newnums[i]>=s.top())
            s.pop();

            if (i < 2*n) 
            nge[i%n] = s.empty() ? -1 : s.top();

            s.push(newnums[i]);
        }

        return nge;

    }
};