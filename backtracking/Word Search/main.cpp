class Solution {
public:
    bool exist(vector<vector<char>>& board, string word) {
        for (int i=0;i<board.size();i++) {
            for (int j=0;j<board[0].size();j++) {
                unordered_set<int> visit;
                if (f(i, j, word, 0, board, visit)) {
                    return true;
                }
            }
        }
        return false;
    }
private:
    vector<pair<int, int>> directions = {{0, 1}, {0, -1}, {1, 0}, {-1, 0}};
    bool f(int i, int j, string s, int index, vector<vector<char>>& grid, unordered_set<int>& visit) {
        if (index==s.length()-1 && grid[i][j]==s[index]) return true;
        if (grid[i][j]!=s[index]) return false;
        visit.insert(i*grid[0].size() + j);
        for (auto& p: directions) {
            int iN = i+p.first, jN = j+p.second;
            if (iN<grid.size() && jN<grid[0].size() && iN>=0 && jN>=0 && !visit.count(iN*grid[0].size() + jN)) {
                if (f(iN, jN, s, index+1, grid, visit)) return true;
            }
        }
        visit.erase(i*grid[0].size() + j);
        return false;
    }
};
