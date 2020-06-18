class Solution {
public:
    ListNode* getKthFromEnd(ListNode* head, int k) {
        ListNode* p=head;
        ListNode* q=head;
        for (int i=0;i<k;i++){
            if (q)
                q=q->next;
            else
                return head;
        }
        while(q){
            q=q->next;
            p=p->next;
        }
        
        return p;
    }
};