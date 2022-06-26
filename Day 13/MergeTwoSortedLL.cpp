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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* head=NULL, *s=NULL;
        if(list1==NULL) return list2;
        if(list2==NULL) return list1;
        if(list1 && list2)
        {
            if(list1->val<list2->val)
            {
                head=list1;
                s=list1;
                list1=list1->next;
            }
            else
            {
                head=list2;
                s=list2;
                list2=list2->next;
            }   
        }
        while(list1 && list2)
        {
            if(list1->val<list2->val)
            {
                s->next=list1;
                s=list1;
                list1=list1->next;
            }
            else
            {
                s->next=list2;
                s=list2;
                list2=list2->next;
            }
        }
        if(list1==NULL) s->next=list2;
        if(list2==NULL) s->next=list1;
        return head;
    }
};
