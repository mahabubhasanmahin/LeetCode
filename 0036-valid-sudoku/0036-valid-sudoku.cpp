class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        bool r[9][9]={};
        bool c[9][9]={};
        bool b[9][9]={};

        for(int i=0;i<9;i++){
            for(int j=0;j<9;j++){
                if(board[i][j] == '.') continue;

                int num = board[i][j] - '1';
                int bb=(i/3) * 3 + j/3;

                if(r[i][num] || c[j][num] || b[bb][num]){
                    return false;
                }
                r[i][num] = true;
                c[j][num] = true;
                b[bb][num] = true;
            }
        }
        return true;
    }
};