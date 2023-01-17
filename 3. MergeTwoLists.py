# Definition for singly-linked list.
# class ListNode(object):
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution(object):
    def mergeTwoLists(self, list1, list2):
        """
        :type list1: Optional[ListNode]
        :type list2: Optional[ListNode]
        :rtype: Optional[ListNode]
        """
        head = None
        ans = None
        if (list1 != None and list2 != None):
            if list1.val <= list2.val:
                head = list1
                list1 = list1.next
            else:
                head = list2
                list2 = list2.next
            ans = head
        else:
            if list1 is None: return list2
            if list2 is None: return list1

        while list2 is not None and list1 is not None:
            print("%d %d" %(list1.val, list2.val))
            if list1.val <= list2.val:
                ans.next = list1
                list1 = list1.next
                ans = ans.next
            else:
                ans.next = list2
                list2 = list2.next
                ans = ans.next


        if list2 is None:
            while list1 is not None:
                ans.next = list1
                list1 = list1.next
                ans = ans.next
        else:
            while list2 is not None:
                print(list2.val)
                ans.next = list2
                list2 = list2.next
                ans = ans.next
        return head

