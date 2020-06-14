class Solution:
    def movingCount(self, m: int, n: int, k: int) -> int:
        def get(x):
            res=0
            while(x):
                res+=x%10
                x//=10
            return res
        Queue=[]
        vist=set()
        Queue.append((0,0))
        while len(Queue):
            x,y=Queue.pop()
            if (x,y) not in vist and x<m and y<n and get(x) + get(y) <= k:
                vist.add((x,y))
                for nx, ny in [(x + 1, y), (x, y + 1)]:
                    Queue.append((nx, ny))
        return len(vist)

