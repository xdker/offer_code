class Solution {
public:
    ListNode* deleteNode(ListNode* head, int val) {
        if(val==head->val) return head->next;
        ListNode * p=head;
        while(p->next){
            if (p->next->val==val){
                p->next=p->next->next;
                break;
            }
            p=p->next;
        }
        return head;
    }
};