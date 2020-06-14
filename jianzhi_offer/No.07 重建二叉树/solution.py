# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None

class Solution:
    def buildTree(self, preorder: List[int], inorder: List[int]) -> TreeNode:
        return self.build(preorder, inorder, 0, len(preorder), 0, len(inorder))
    def build(self,preorder,inorder,pre_start,pre_end,in_start,in_end):
        if in_start==in_end:return None
        root=TreeNode(preorder[pre_start])
        root_idx=inorder.index(preorder[pre_start])
        root.left=self.build(preorder, inorder, pre_start+1, pre_start+1+(root_idx-in_start), in_start, root_idx)
        root.right=self.build(preorder, inorder, pre_start+1+(root_idx-in_start),pre_end , root_idx+1,in_end)
        return root