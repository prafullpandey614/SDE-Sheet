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
    Node* copyRandomList(Node* head) {\
        if(head==NULL) return head;
        Node* iter=head;
        Node* front = head;
        while(iter){
            front = iter->next;
            Node *copy = new Node(iter->val);
            copy->next = front;
            iter->next = copy;
            iter =front;
        }
        iter = head;
        while(iter){
            if(iter->random!=NULL)
            iter->next->random = iter->random->next;
            iter = iter->next->next;
        }
        Node*dummy = new Node(0);
        dummy->next = head->next;
        iter = head;
        Node*copy = dummy;
        while(iter){
            front = iter->next->next;
            
            copy->next = iter->next;
            iter->next = front;
            copy = copy->next;
            iter =front;
        }
        return  dummy->next;
    }
};
