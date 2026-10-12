class Solution {
public:



    bool isValidSudoku(vector<vector<char>>& board) {

        // check row 
        // check column 
        // check box 

        std::unordered_map<int, std::unordered_set<char>> rowSet{};
        std::unordered_map<int, std::unordered_set<char>> columnSet{};
        std::map<std::pair<int, int>, std::unordered_set<char>> boxSet{};
        int boardWidth = 9;
        int boardHeight = 9;
        for(int i = 0; i < boardWidth; i++){
            for(int j= 0; j < boardHeight; j++){
                char currentChar = board[i][j];
                std::pair<int, int> currentBox {i / 3, j /3};
                if(currentChar== '.') continue;
                if (rowSet[i].contains(currentChar) || columnSet[j].contains(currentChar) || boxSet[currentBox].contains(currentChar))
                    return false;
                rowSet[i].insert(currentChar);
                columnSet[j].insert(currentChar);
                boxSet[{currentBox}].insert(currentChar);
            }
        }
        return true;
    }
};
