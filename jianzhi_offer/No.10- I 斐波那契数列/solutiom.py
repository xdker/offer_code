class Solution:
    def fib(self, n: int) -> int:
        num={0:0,1:1}
        if n > 1:
            for i in range(2,n+1):
                num[i] = num[i-2] + num[i-1]
        return int(num[n]%(1000000007))

class Solution:
    def fib(self, n: int) -> int:
        a,b=0,1
        for _ in range(n):
           a,b=b,int((a+b)%1000000007)
        return a