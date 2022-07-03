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
    bool hasCycle(ListNode *head) {
        //O(n), O(n)
        // set<ListNode*> m;
        // ListNode *trav=head;
        // while(trav!=NULL)
        // {
        //     if(m.find(trav)!=m.end())
        //         return true;
        //     m.insert(trav);
        //     trav=trav->next;
        // }
        // return false;
        
        // O(n), O(1)
        ListNode *slow=head, *fast=head;
        while(fast!=NULL && fast->next!=NULL)
        {
            slow=slow->next;
            fast=fast->next->next;
            if(slow==fast)
                return true;
        }
        return false;
    }
};
