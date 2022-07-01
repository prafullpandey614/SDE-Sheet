/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode() {}
 *     ListNode(int val) { this.val = val; }
 *     ListNode(int val, ListNode next) { this.val = val; this.next = next; }
 * }
 */
class Solution {
    public ListNode removeNthFromEnd(ListNode head, int n) {
        ListNode temp = new ListNode();
         temp.next = head;
        ListNode slow = temp;
        ListNode fast = temp;
       
        for(int i=1;i<=n;++i) fast = fast.next;
        if(fast.next == null) return head.next;
        while(fast.next!=null)   {slow  = slow.next; fast = fast.next;};
        slow.next = slow.next.next ;
        return head ; 
        
    }
}
