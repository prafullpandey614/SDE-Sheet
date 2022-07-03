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
    ListNode* reverse(ListNode* ptr) {
    ListNode* pre=NULL;
    ListNode* nex=NULL;
    while(ptr!=NULL) {
        nex = ptr->next;
        ptr->next = pre;
        pre=ptr;
        ptr=nex;
    }
    return pre;
}
    bool isPalindrome(ListNode* head) {
        ListNode *fast = head;
        ListNode *slow = head;
        while((fast->next!=NULL )&& (fast->next->next!=NULL)){
            fast = fast->next->next;
            slow= slow->next;
        }
        slow->next   =  reverse(slow->next);
        slow  = slow->next;
        while(slow){
            if(slow->val!=head->val) return false;
            slow = slow->next;
            head = head->next;
        }
        return true;
    }
};
