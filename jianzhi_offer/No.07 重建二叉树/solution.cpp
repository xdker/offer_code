class Solution {
public:
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        return build(preorder.begin(),preorder.end(),inorder.begin(),inorder.end());
    }
    TreeNode* build(vector<int>::iterator prestart,vector<int>::iterator preend,vector<int>::iterator instart,vector<int>::iterator inend){
        if(instart==inend) return NULL;
        TreeNode* root=new TreeNode(*prestart);//指向根节点的指针
        auto root_idx=find(instart,inend,*prestart);//查找根节点在中序的位置
        root->left=build(prestart+1,prestart+1+(root_idx-instart),instart,root_idx);//建立左子树
        root->right=build(prestart+1+(root_idx-instart),preend,root_idx+1,inend);//建立右子树
        return root;
    }
};