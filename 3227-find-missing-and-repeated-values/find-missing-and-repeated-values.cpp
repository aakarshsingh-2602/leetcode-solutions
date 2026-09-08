class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        vector<int> ans(2,0);
        int n=grid.size();
        int s=n*n;
        vector<int> h(s,0);
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                h[grid[i][j]-1]++;
            }
        }
        for(int i=0;i<s;i++)
        {
            if(h[i]==2)
            ans[0]=i+1;
            if(h[i]==0)
            ans[1]=i+1;
        }
        return ans;
    }
};