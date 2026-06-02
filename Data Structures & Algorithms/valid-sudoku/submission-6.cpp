class Solution { 
public: 
    bool isValidSudoku(const vector<vector<char>> &board) { 
        vector<unordered_set<char>> cols(9), sqrs(9); 
        
        for (int i = 0; i < 9; ++i) { 
            unordered_set<char> row; 
            
            for (int j = 0; j < 9; ++j) { 
                char currVal = board[i][j]; 
                int sqrsIdx = (i / 3) * 3 + (j / 3); 
                
                if (row.contains(currVal) || cols[j].contains(currVal) || sqrs[sqrsIdx].contains(currVal)) { 
                    return false; 
                } 

                if ('.' == currVal) { 
                    continue; 
                } 
                
                sqrs[sqrsIdx].insert(currVal); 
                row.insert(currVal); 
                cols[j].insert(currVal); 
                } 
            } 
            
            return true; 
        } 
    };