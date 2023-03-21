# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right

class Solution:
    balanced = True
    def height(self, root):
        if root is None:
            return 0
        left = self.height(root.left)
        right = self.height(root.right)
        if abs(left - right) > 1:
            self.balanced = False
        return max(left, right) + 1
    def isBalanced(self, root: Optional[TreeNode]) -> bool:
        if root is None:
            return True
        self.height(root)
        return self.balanced
        