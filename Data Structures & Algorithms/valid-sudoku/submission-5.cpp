class Solution {
public:
    bool isValidSudoku(const vector<vector<char>> &board) {
        bool cols[9][9] = {}, 
             sqrs[9][9] = {};

        for (int i = 0; i < 9; ++i) {
            bool row[9] = {};

            for (int j = 0; j < 9; ++j) {
                if ('.' == board[i][j]) {
                    continue;
                }

                int currVal = board[i][j] - '1';
                int sqrsIdx = (i / 3) * 3 + (j / 3);

                if (row[currVal] || cols[j][currVal] || sqrs[sqrsIdx][currVal]) {
                    return false;
                }

                sqrs[sqrsIdx][currVal] = true;
                row[currVal] = true;
                cols[j][currVal] = true;    
            }
        }

        return true;
    }
};
