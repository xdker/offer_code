class Solution:
    def exist(self, board: List[List[str]], word: str) -> bool:
        for i in range(len(board)):
            for j in range(len(board[0])):
                if self.dfs(board, word, i, j, 0): return True
        return False
    def dfs(self,b,w,i,j,k):
        if not 0<=i<len(b) or not 0<=j<len(b[0]) or b[i][j]!=w[k]:
            return False 
        if k==len(w)-1: return True
        tmp,b[i][j]=b[i][j],'/'
        res=self.dfs(b,w,i-1,j,k+1) or self.dfs(b,w,i+1,j,k+1) or self.dfs(b,w,i,j-1,k+1) or self.dfs(b,w,i,j+1,k+1)
        b[i][j]=tmp
        return res