# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next

class Solution:
    def reverseList(self, head: Optional[ListNode]) -> Optional[ListNode]:
        if not head: return None
        current = head
        tmp = head
        prev = None
        while current.next != None:
            tmp = current.next
            current.next = prev
            prev = current
            current = tmp
        current.next = prev
        return current



        