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
    public ListNode partition(ListNode head, int x) {
            ListNode before_head = new ListNode(0);
        ListNode befor = before_head;
        ListNode after_head = new ListNode(0);
        ListNode after = after_head;
        while(head!=null){
            if(head.val<x){
                befor.next = head ;
                // head = head.next;
                befor = befor.next ;
            }
            else {
                after.next = head;
              
                after = after.next ;
            }  head= head.next ;
        }
        after.next = null;
        befor.next = after_head.next ;
        return before_head.next;
    }
}
