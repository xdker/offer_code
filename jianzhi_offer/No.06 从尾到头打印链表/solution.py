class Solution:
    def reversePrint(self, head: ListNode) -> List[int]:
        result=[]
        while(head):
            result=[head.val]+result
            head = head.next
        return result