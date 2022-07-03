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
     
    int lengthOfLinkedList(ListNode* head) {
    int length = 0;
    while(head != NULL) {
        ++length;
        head = head->next;
    }
    return length;
    }
    ListNode* reverseKGroup(ListNode* head, int k) {
        int l  = lengthOfLinkedList(head);
        ListNode *dummyHead = new ListNode(0);
        dummyHead->next = head;
        ListNode *pre = dummyHead;
        ListNode *cur;
        ListNode *nex;
        while(l>=k){
            cur = pre->next;
            nex = cur->next;
            for(int i=1;i<k;++i){
                cur->next = nex->next;
                nex->next = pre->next;
                pre->next = nex;
                nex = cur->next;
            }
            pre = cur;
            l-=k;
        }
        return dummyHead->next;
        
    }
};
