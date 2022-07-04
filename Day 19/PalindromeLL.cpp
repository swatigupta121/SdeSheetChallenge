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
    bool isPalindrome(ListNode* head) {
        /*vector<int> p,q;
        ListNode *trav=head;
        while(trav!=NULL)
        {
            p.push_back(trav->val);
            trav=trav->next;
        }
        ListNode* prev=NULL;
        ListNode* curr=head;
        while(curr!=NULL)
        {
            ListNode* temp=curr->next;
            curr->next=prev;
            prev=curr;
            curr=temp;
        }
        head=prev;
        trav=head;
        while(trav!=NULL)
        {
            q.push_back(trav->val);
            trav=trav->next;
        }
        if(p==q)
            return true;
        else
            return false;
        */
        int total=0,flag=1;
        ListNode *trav=head;
        while(trav!=NULL)
        {
            total++;
            trav=trav->next;
        }
        int pos=0,mid=total/2;
        ListNode* i=head,*prev=NULL,*temp=NULL;
        while(pos!=mid && i!=NULL)
        {
            temp=i->next;
            i->next=prev;
            prev=i;
            i=temp;
            pos++;
        }
        if(total%2!=0)
            i=i->next;
        while(i!=NULL && prev!=NULL)
        {
            if(i->val!=prev->val)
            {
                flag=0;
                break;
            }
            else
            {
                i=i->next;
                prev=prev->next;
            }
        }
        if(flag)
            return true;
        else
            return false;
    }
};
