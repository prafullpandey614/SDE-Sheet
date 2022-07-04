import java.util.* ;
import java.io.*; 
/*************************************************************

    Following is the LinkedListNode class structure

    class LinkedListNode<T> {
	    T data;
	    LinkedListNode<T> next;
	    LinkedListNode<T> random;

	    public LinkedListNode(T data) {
		    this.data = data;
	    }
    }

*************************************************************/

public class Solution {
	public static LinkedListNode<Integer> cloneRandomList(LinkedListNode<Integer> head) {
		// Write your code here.
        LinkedListNode iter = head;
        LinkedListNode front = head;
        while(iter!=null){
            front = iter.next;
            LinkedListNode copy = new LinkedListNode(iter.data);
            iter.next = copy;
            iter = front;
        }
        iter = head;
        while(iter!=null){
            if(iter.random!=null)
            iter.next.random = iter.random.next;
            iter= iter.next.next;
        }
        LinkedListNode dummy = new LinkedListNode(0);
        LinkedListNode copy = dummy;
       // LinkedListNode dummy = new LinkedListNode(0);
        iter = head;
        while(iter!=null){
            front = iter.next.next;
            copy.next = iter.next;
            iter.next = front;
            copy = copy.next;
            iter = front;
        }
        return dummy.next;
	}
}
