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
    ListNode* swapNodes(ListNode* head, int k) {
       ListNode*temp  =head  , *ptr1 ,*ptr2 ,*ptr3;
        int count = 0;
        while(count<k-1){
            temp  =temp->next;
            count++;
        }
        ptr1 = temp ;
        ptr2 = head;
        while(temp->next!=NULL){
            temp = temp->next;
            ptr2 = ptr2->next ;
            
        }
        swap(ptr1->val ,ptr2->val);
        return head ;
        
    }
};
