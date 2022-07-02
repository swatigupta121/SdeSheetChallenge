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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        //O(m*n), O(1)
        // int flag=0;
        // ListNode *trav1=headA, *trav2=headB;
        // while(trav1!=NULL)
        // {
        //     trav2=headB;
        //     while(trav2!=NULL)
        //     {
        //         if(trav1==trav2)
        //         {
        //             return trav1;   
        //         }   
        //         trav2=trav2->next;
        //     }
        //     trav1=trav1->next;
        // }
        // return NULL;
        
        //O(n+m), O(n)
        // unordered_set<ListNode*> m;
        // ListNode *trav1=headA, *trav2=headB;
        // while(trav1!=NULL)
        // {
        //     m.insert(trav1);
        //     trav1=trav1->next;
        // }
        // while(trav2!=NULL)
        // {
        //     if(m.find(trav2)!=m.end())
        //         return trav2;
        //     trav2=trav2->next;
        // }
        // return NULL;        
        
        //O(2max(length of list1,length of list2))+O(abs(length of list1-length of list2))+O(min(length of list1,length of list2)), O(1)
        // int diff = getDifference(headA,headB);
        // if(diff < 0) 
        //     while(diff++ != 0) headB = headB->next; 
        // else while(diff-- != 0) headA = headA->next;
        // while(headA != NULL) {
        //     if(headA == headB) return headA;
        //     headB = headB->next;
        //     headA = headA->next;
        // }
        // return headA;
        
        //O(2*max(length of list1,length of list2))
        ListNode* d1 = headA;
        ListNode* d2 = headB;

        while(d1 != d2) {
            d1 = d1 == NULL? headB:d1->next;
            d2 = d2 == NULL? headA:d2->next;
        }

        return d1;
    }
    
    int getDifference(ListNode* head1,ListNode* head2) 
    {
        int len1 = 0,len2 = 0;
        while(head1 != NULL || head2 != NULL) 
        {
            if(head1 != NULL) 
            {
                ++len1; head1 = head1->next;
            }
            if(head2 != NULL) 
            {
                ++len2; head2 = head2->next;
            }        
        }
        return len1-len2;//if difference is neg-> length of list2 > length of list1 else vice-versa
    }
};
