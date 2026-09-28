class Solution {
public:
    bool is_safe( vector<string>& queen, int n, int cols, int rows){
        for(int j=0; j<n; j++){
            if(queen[rows][j]=='Q') return false;
        }
        for(int i=0;i<n;i++){
            if(queen[i][cols]=='Q') return false;
        }
        for(int i=rows, j=cols; i>=0 && j>=0; i--,j--){
            if(queen[i][j]=='Q') return false;
        }
         for(int i=rows, j=cols; i>=0 && j<n; i--,j++){
            if(queen[i][j]=='Q') return false;
        }
        return true;
    }
    void Queens( vector<string>& queen, int n, int rows,  vector<vector<string>>& ans){
        if(rows==n){
            ans.push_back(queen);
            return;
        }
        for(int i=0;i<n;i++){
            if(is_safe(queen, n, i, rows)){
                queen[rows][i]='Q';
                Queens(queen, n, rows+1, ans);
                queen[rows][i]='.';
            }
        }
    }
    vector<vector<string>> solveNQueens(int n) {
        vector<string> queen(n, string(n, '.'));
        vector<vector<string>> ans;

        Queens(queen, n, 0, ans);
        return ans;
    }
};