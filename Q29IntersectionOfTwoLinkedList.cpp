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
        int a=0,b=0;
        ListNode *temp1 = headA ;
        ListNode *temp2 = headB ;
        while(temp1){
            a++;
            temp1 = temp1->next;
        }
        while(temp2){
            b++;
            temp2 = temp2->next;
        }
        temp1 = headA;
        temp2 = headB;
        int diff = abs(b-a);
        if(a>b){
            for(int i=1;i<=diff ; i++){
                temp1 = temp1->next ; 
            }
        }
        else{
            
            for(int i=1;i<=diff ; i++){
                temp2 = temp2->next ; 
            }
        }
        while(temp1 != NULL) {
            if(temp1 == temp2) return temp1;
            temp2 = temp2->next;
            temp1 = temp1->next;
        }
        return temp1;
    }
};
