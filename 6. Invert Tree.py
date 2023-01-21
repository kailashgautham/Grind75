# Definition for a binary tree node.
# class TreeNode(object):
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution(object):
    def invertTree(self, root):
        """
        :type root: TreeNode
        :rtype: TreeNode
        """
        if not root: return
        if root.left and root.right:
            temp = root.left
            root.left = root.right
            root.right = temp
        elif root.left:
            temp = root.left
            root.left = None
            root.right = temp
        elif root.right:
            temp = root.right
            root.right = None
            root.left = temp
        if root.left:
            self.invertTree(root.left)
        if root.right:
            self.invertTree(root.right)
        return root
