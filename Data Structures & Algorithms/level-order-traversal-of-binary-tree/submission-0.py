# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right

class Solution:
    def levelOrder(self, root: Optional[TreeNode]) -> List[List[int]]:
        queue = deque()
        tree_map = []

        if root:
            queue.append(root)

        level = 0
        while len(queue) > 0:
            for i in range(len(queue)):
                curr = queue.popleft()
                tree_map.append((curr.val, level))

                if curr.left:
                    queue.append(curr.left)
                if curr.right:
                    queue.append(curr.right)

            level += 1
        
        curr_lvl = None
        res = []
        for el in tree_map:
            if curr_lvl != el[1]:
                curr_lvl = el[1]
                res.append([el[0]])
            else: 
                res[curr_lvl].append(el[0])
            
            
        return res
