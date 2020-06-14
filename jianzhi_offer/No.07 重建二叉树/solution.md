### 解法(递归)
分别建立左子树和右子树
递归build函数
建立根节点=先序序列第一个节点
先序序列中取得根节点，然后在中序序列中定位根节点 root_idx
中序序列中跟节点左子树为范围为[start,root_idx),右子树范围为[root_idx+1,end)
调用root->left=build(left),root->right=build(right)
return root