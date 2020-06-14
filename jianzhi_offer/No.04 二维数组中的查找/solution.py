class Solution:
    def findNumberIn2DArray(self, matrix: List[List[int]], target: int) -> bool:
        if not len(matrix):
            return False
        m=len(matrix)
        n=len(matrix[0])
        m1=m-1
        n1=0
        while m1>=0 and n1<n:
            if matrix[m1][n1]<target:
                n1+=1
            elif matrix[m1][n1]>target:
                m1-=1
            else:
                return True
        return False