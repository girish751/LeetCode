class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        // To track the occurences of numbers in row, col, and box(3*3)
        unordered_set<char> rows[9],cols[9], box[9];

        for(int r=0;r<9;r++){
            for(int c =0;c<9;c++){
                if(board[r][c]=='.'){
                    continue;
                }
                char val = board[r][c];
                // To get the index for a box
                int boxind = (r/3)*3 + (c/3);
                // if any of the element exists then return false
                if(rows[r].count(val)|| cols[c].count(val) || box[boxind].count(val)){
                    return false;
                }
                //otherwise
                rows[r].insert(val);
                cols[c].insert(val);
                box[boxind].insert(val);
            }
        } 
        return true;
    }
};