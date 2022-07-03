import java.util.* ;
import java.io.*; 
/****************************************************************

    Following is the class structure of the Node class:

        class Node
		{
		    public int data;
		    public Node next;

		    Node(int data)
		    {
		        this.data = data;
		        this.next = null;
		    }
		}

*****************************************************************/

public class Solution 
{
    public static Node firstNode(Node head) 
    {
        //    Write your code here.
        Set<Node>st = new LinkedHashSet<Node>();
        while(head!=null){
            if(st.contains(head)) return head ;
            st.add(head);
            head = head.next;
        }
        return head;
    }
}
