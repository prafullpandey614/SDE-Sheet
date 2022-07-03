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
    ListNode *detectCycle(ListNode *tmp) {
        unordered_set<ListNode*>st;
       
        while(tmp){
            if(st.find(tmp)== st.end()){
                 st.insert(tmp);
                 tmp = tmp->next;
            }
            else return tmp;
           
        }
        // bool flag = 0;
        // tmp = head;
        // while(tmp){
        //     if(st.find(tmp))
        // }
        return tmp;
    }
};
