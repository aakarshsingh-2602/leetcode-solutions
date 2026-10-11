class Solution {
public:
    vector<int> findDegrees(vector<vector<int>>& matrix) {
        vector<int> result(matrix.size(),0);
        for(int i=0; i<matrix.size();i++){
            for(int j=0;j<matrix[0].size();j++){
                result[i]+=matrix[i][j];
            }
        }
        return result;
    }
};