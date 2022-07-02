import java.util.* ;
import java.io.*; 
/************************************
	 
	 //Following is the class structure of the LinkedListNode class:
	 
	  class LinkedListNode<T> {
		public T data;
		public LinkedListNode<T> next;
		
		public LinkedListNode(T data) {
			this.data = data;
			this.next = null;
		}
	}

*****************************************/
public class Solution {

	public static int findIntersection(LinkedListNode<Integer> firstHead, LinkedListNode<Integer> secondHead) {
        LinkedListNode t1 = firstHead;
		LinkedListNode t2 = secondHead;
        int l1 = 0; 
        int l2 = 0;
        while(t1!=null || t2!=null){
            if(t1!=null){
                t1 = t1.next;
                l1++;
            }
            if(t2!=null){
                t2 = t2.next;
                l2++;
            }
        }
        
        int diff;
        if(l1>l2)
        diff= l1-l2;
        else diff = l2-l1;
        if(l1>l2){
            for(int i=0;i<diff;++i){
                firstHead = firstHead.next;
            }
        }
        else{
             for(int i=0;i<diff;++i){
              //  firstHead = firstHead.next;
                 secondHead  = secondHead.next;
            }
           
        }
        while(firstHead!=null){
            if(secondHead==firstHead) return firstHead.data;
            firstHead = firstHead.next;
            secondHead = secondHead.next;
        }
        return -1;
	}
}
