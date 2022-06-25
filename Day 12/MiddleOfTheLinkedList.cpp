/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        // O(N)- 2 PASS, O(1)
        // ListNode* trav=head,*node=head;
        // int c=0;
        // while(trav!=NULL)
        // {
        //     c++;
        //     trav=trav->next;
        // }
        // // cout << c << c/2;
        // int t=0;
        // while(t<c/2)
        // {
        //     node=node->next;
        //     t++;
        // }
        // return node;
        
        ListNode* fast=head,*slow=head;
        while(fast!=NULL && fast->next!=NULL)
        {
            slow=slow->next;
            fast=fast->next->next;
        }
        return slow;
    }
};
