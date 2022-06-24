class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* prev=NULL, *trav=head, *ne;
        while(trav!=NULL)
        {
            ne=trav->next;
            trav->next=prev;
            prev=trav;
            trav=ne;
        }
        return prev;
    }
};
