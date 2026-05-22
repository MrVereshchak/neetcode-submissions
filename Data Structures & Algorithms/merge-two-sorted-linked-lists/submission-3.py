# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next

class Solution:
    def mergeTwoLists(self, list1: Optional[ListNode], list2: Optional[ListNode]) -> Optional[ListNode]:
        curr_1, curr_2 = list1, list2

        if(curr_1 and curr_2):
            if(curr_1.val < curr_2.val):
                result = ListNode(curr_1.val)
                curr_1 = curr_1.next
            else:
                result = ListNode(curr_2.val)
                curr_2 = curr_2.next
        elif(curr_1 and not curr_2):
            result = ListNode(curr_1.val)
            curr_1 = curr_1.next
        elif(not curr_1 and curr_2):
            result = ListNode(curr_2.val)
            curr_2 = curr_2.next
        else:
            return ListNode().next

        val_1, val_2 = None, None

        head = result

        while curr_1 or curr_2:
            val_1 = curr_1.val if curr_1 else None
            val_2 = curr_2.val if curr_2 else None

            if((val_1 is not None) and (val_2 is not None)):
                if(val_1 < val_2):
                    result.next = curr_1
                    curr_1 = curr_1.next
                else:
                    result.next = curr_2
                    curr_2 = curr_2.next
            if((val_1 is not None) and (val_2 is None)):
                result.next = curr_1
                curr_1 = curr_1.next
            if((val_1 is None) and (val_2 is not None)):
                result.next = curr_2
                curr_2 = curr_2.next
            
            result = result.next

        return(head)



