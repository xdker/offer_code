- 方法一：暴力递归
  $$
  F(n)=max(i\times(n-i),i\times F(n-i)),i=1,2,...,n-2
  $$

切一段长度为i，剩下的n-i可以切，也可以不切，求两种情况的最大乘积

- 方法二：动态归划

  必须要剪 dp[2] = 1 长度为2单独处理 n>3时
  $$
  dp[i] = max(dp[i], max((i - j) * j, j * dp[i - j]))
  $$
  

  ![image-20200615171815312](https://img.5icv.com/imgs/image-20200615171815312.png)