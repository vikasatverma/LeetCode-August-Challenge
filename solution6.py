# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right

def sumat(root,sum):
    p = 0
    if(sum - root.val == 0 ):
        p = 1
    if(root.left is not None):
        p = sumat(root.left, sum - root.val) + p
    if(root.right is not None):
        p = sumat(root.right, sum - root.val) +p
        
    return p

class Solution:
    

    def pathSum(self, root: TreeNode, sum: int) -> int:
        if(root is None):
            return 0
        tot = sumat(root,sum)
        if(root.left is not None):
            tot = tot + self.pathSum(root.left,sum)
        if(root.right is not None):
            tot = tot + self.pathSum(root.right,sum)
        return tot;
