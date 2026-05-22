# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next

class Solution:
    def reverseList(self, head: Optional[ListNode]) -> Optional[ListNode]:
        prev_pos = None
        curr_pos = head

        while curr_pos:
            next_pos = curr_pos.next
            curr_pos.next = prev_pos
            prev_pos = curr_pos
            curr_pos = next_pos

        return(prev_pos)  
