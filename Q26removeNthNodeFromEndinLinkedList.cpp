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
       
        int m=0;
        ListNode*temp = head;        ListNode*head2 = head;

        while(temp){
            m++;
            temp = temp->next;
        }
        if(n==m) return head->next;
        n = m - n;
        for(int i=1;i <n;++i){
            head = head->next;
        }
        head->next = head->next->next;
        return head2;
        
    }
};
