- 解法一 递归
  直接递归，会有大量的重复计算，时间复杂度O(n^2)，O(n)
  
- 解法二 记忆化的递归
  用一个序列存储已经计算的值，不需要重复计算O(n)，O(n)
  
- 解法三 直接循环(即动态规划)
  利用数组存储已经计算的值，单层循环[i-1]+[i-2]即可，时间复杂度O(n)，O(n)
  
- 解法三 直接循环(两个利用变量，替换数组)
  利用数组存储已经计算的值，单层循环[i-1]+[i-2]即可，时间复杂度O(n)，O(1)
  
- 解法四 矩阵乘法

  ![image-20200614160318147](https://img.5icv.com/imgs/image-20200614160318147.png)