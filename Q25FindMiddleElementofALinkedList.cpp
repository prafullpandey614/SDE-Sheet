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
        int n=0;
        ListNode *newNode =head;
        while(head!=NULL){
            head = head->next;
            n++;
        }
        
        for(int i = 0 ;i<((n)/2);++i){
           newNode = newNode->next ;
        }
        return newNode;
    }
};
