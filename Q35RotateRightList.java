import java.util.* ;
import java.io.*; 
/***********************************************
    Following is the class structure of the Node class:

    class Node {
        int data;
        Node next;

        Node(int x) {
            this.data = x;
            this.next = null;
        }
    }

************************************************/

public class Solution {
    public static Node rotate(Node head, int k) {
        // Write your code here.
        if(head==null || head.next==null) return head;
        int len = 1;
        Node temp = head;
        while(temp.next!=null){
            len++;
            temp = temp.next;
        }
        temp.next=head;
        k = k%len;
        k = len -k;
        while(k>0){
            temp = temp.next;
            k--;
        }
        head = temp.next;
        temp.next= null;
        return head;
    }
}
