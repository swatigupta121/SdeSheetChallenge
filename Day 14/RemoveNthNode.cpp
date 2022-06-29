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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        // O(N), 2 PASS
        // ListNode* trav=head, *prev=NULL;
        // int c=0;
        // while(trav!=NULL)
        // {
        //     c++;
        //     trav=trav->next;
        // }
        // if(n==c)
        // {
        //     head=head->next;
        //     return head;
        // }
        // int t=0;
        // trav=head;
        // while(t<c-n)    //3
        // {
        //     prev=trav;
        //     trav=trav->next;
        //     t++;    //3
        // }
        // prev->next=trav->next;
        // return head;
        
        //O(N), O(1)
        ListNode * start = new ListNode();
        start -> next = head;
        ListNode* fast = start;
        ListNode* slow = start;    
        // ListNode* slow=head, *fast=head;
        int c=0;
        while(c<n)
        {
            fast=fast->next;
            c++;
        }
        while(fast->next!=NULL)
        {
            slow=slow->next;
            fast=fast->next;
        }
        slow->next=slow->next->next;
        return start->next;
    }
};
