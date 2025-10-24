class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        vector<unordered_set<char>> rows(9);
        vector<unordered_set<char>> cols(9);
        vector<unordered_set<char>> boxes(9);

        int n = board.size();
        int m = board[0].size();
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                char ch = board[i][j];
                if (ch == '.') continue;

                // rows
                if (rows[i].count(ch) > 0) return false;
                rows[i].insert(ch);

                if (cols[j].count(ch) > 0) return false;
                cols[j].insert(ch);

                int boxIdx = (i / 3) * 3 + (j / 3);
                if (boxes[boxIdx].count(ch) > 0) return false;
                boxes[boxIdx].insert(ch);
            }
        }

        return true;
    }
};
