//递归解法：递归结束条件 head为空
class Solution {
public:
    vector<int> rest;
    vector<int> reversePrint(ListNode* head) {
        if(!head) return rest;
        reversePrint(head->next);
        rest.push_back(head->val);
        return rest;
    }
};