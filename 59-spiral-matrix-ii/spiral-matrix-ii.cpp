class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> ans(n,vector<int>(n,0));
        int counter=1;
        int top=0,bottom=n-1,left=0,right=n-1;
        while(top<=bottom && left<=right){

            for(int i=left;i<=right;i++){
                ans[top][i]=counter;
                counter++;
            }
            top++;

            for(int i=top;i<=bottom;i++){
               ans[i][right]=counter;
                counter++;
            }
            right--;

            if(top<=bottom){
            for(int i=right;i>=left;i--){
                
                ans[bottom][i]=counter;
                counter++;
            }
            bottom--;
            }

            if(left<=right){

            for(int i=bottom;i>=top;i--){
                
                ans[i][left]=counter;
                counter++;
            }
            left++;
            }
            

        }
        return ans;
    }
};