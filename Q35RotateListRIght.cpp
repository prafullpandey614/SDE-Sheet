class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
         if(head == NULL||head->next == NULL) return head;
   
            ListNode *temp = head;
          
            int len = 1;
          while(temp->next!=NULL){
            len++;
            temp = temp->next;
            }
            temp->next = head;
            int pos  =len -  (k%len);
          while(pos--) temp = temp->next;
            head = temp->next;
            temp->next = NULL;
            return head ;
       
    }
};
