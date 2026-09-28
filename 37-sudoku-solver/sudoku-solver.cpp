class Solution {
public:
    bool solved(vector<vector<char>>& board, int rows, int cols, char digit){
        for(int i=0;i<9;i++){
            if(board[i][cols]==digit) return false;
        }
        for(int j=0;j<9;j++){
            if(board[rows][j]==digit) return false;
        }
        int startRow = (rows / 3) * 3;
        int startCol = (cols / 3) * 3;

        for (int r = 0; r < 3; ++r) {
            for (int c_idx = 0; c_idx < 3; ++c_idx) {
                if (board[startRow + r][startCol + c_idx] == digit) {
                    return false;
                }
            }
        }
        return true;

    }
    bool sudoku(vector<vector<char>>& board, int rows, int cols){
        if(rows==9) return true;

        int next_rows=rows,next_cols=cols+1;
        if(next_cols==9){
            next_rows=rows+1;
            next_cols=0;
        }
        
        if(board[rows][cols]!='.')
        return sudoku(board, next_rows, next_cols);
        
        for(char digit='1';digit<='9';digit++){
            if(solved(board, rows, cols, digit)){
                board[rows][cols]=digit;
                if(sudoku(board, next_rows, next_cols)) return true;
                board[rows][cols]='.';
            }
            
        }
        return false;
    }
    void solveSudoku(vector<vector<char>>& board) {
        sudoku(board,0,0);
    }
};