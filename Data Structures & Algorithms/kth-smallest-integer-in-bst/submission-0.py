# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right

class Solution:
    def __init__(self):
        self.ctn = 0
        self.res = None

    def kthSmallest(self, root: Optional[TreeNode], k: int) -> int:
        if not root:
            return
        self.kthSmallest(root.left, k)
        self.ctn += 1
        if self.ctn == k:
            print(self.ctn, root.val)
            self.res = root.val
        self.kthSmallest(root.right, k)
        return self.res
        