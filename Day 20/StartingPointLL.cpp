/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        ListNode* fast=head, *slow=head;
        
        while(fast!=NULL && fast->next!=NULL)
        {
            slow=slow->next;
            fast=fast->next->next;
            if(fast==slow)
                break;
        }
        
        if(fast==NULL || fast->next==NULL)
            return NULL;
        fast=head;
        //cout << fast->val;
        while(fast!=slow)
        {
            //cout << "\nfast->" << fast->val;
            //cout << "\nslow->" << slow->val;
            fast=fast->next;
            slow=slow->next;
        }
        return fast;
    }
};
