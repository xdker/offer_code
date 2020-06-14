class Solution {
//要到n级相当于n-1级跳一步或者n-2级跳两步
public:
    int numWays(int n) {
        //动态规划4行解决
        //声明n+1大小的vector，+1是要存储0至n共n+1个数据。
        vector<int> v(n + 1, 1); 
        for(int i = 2; i <= n; i++)
            v[i] = (v[i - 1] + v[i - 2]) % 1000000007;//注意别忘记取余
        return v[n];//直接返回最后一个数，即最终结果
    }
};
//变量替换数组
class Solution {
public:
    int numWays(int n) {
        int a=1,b=1;
        int sum;
        for (int i = 0; i < n; i++) {
            sum=(a+b) % 1000000007;
            a=b;
            b=sum;
        }
        return a;
    }
};