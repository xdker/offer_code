//思路：深度优先搜索算法，递归每个点四个方向搜索，经过的点标记
class Solution {
public:
    bool exist(vector<vector<char>>& board, string word) {
        for(int i=0;i<board.size();i++){
            for (int j=0;j<board[0].size();j++){
                if(dfs(board,i,j,0,word)) return true;
            }
        }
        return false;

    }
    bool dfs(vector<vector<char>>& board,int i,int j,int k,string& word){
        if (i >= board.size() || i < 0 || j >= board[0].size() || j < 0 || board[i][j] != word[k]) return false;
        if (k==word.size()-1) return true;
        char tmp=board[i][j];
        board[i][j]='/';
        bool res=dfs(board,i-1,j,k+1,word)||dfs(board,i+1,j,k+1,word)||dfs(board,i,j-1,k+1,word)||dfs(board,i,j+1,k+1,word);
        board[i][j]=tmp;
        return res;
    }
};