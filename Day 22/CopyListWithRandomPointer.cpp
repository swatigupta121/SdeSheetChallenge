/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        unordered_map<Node *, Node *> mp;
        Node *curr = head;
        Node *newHead = new Node(-1), *prev = newHead;
        
        while(curr) {
            Node *node = new Node(curr->val);
            prev->next = node;
            mp[curr] = node;
            curr = curr->next;
            prev = prev->next;
        }
        
        newHead = newHead->next;
        Node *c1 = head, *c2 = newHead;
        
        while(c1) {
            c2->random = mp[c1->random];
            c1 = c1->next;
            c2 = c2->next;
        }
        
        return newHead;
    }
};
