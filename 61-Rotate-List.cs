/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     public int val;
 *     public ListNode next;
 *     public ListNode(int val=0, ListNode next=null) {
 *         this.val = val;
 *         this.next = next;
 *     }
 * }
 */
public class Solution {
    public ListNode RotateRight(ListNode head, int k) {

        if( head==null || k == 0 || head.next == null)
        {
            return head ;
        }

        int cnt = 1;
        ListNode ptr=head;
        while(ptr.next !=null)
        {
            cnt++;
            ptr=ptr.next;
        }

        k = k % cnt ;
        if(k==0)
        {
            return head;
        }

        int newPos = cnt - k ;

        ListNode newTail = head;
        for(int i =1 ;i< newPos ;i++)
        {
            newTail = newTail.next;
        }

        ListNode newHead = newTail.next ;
        newTail.next = null ;
        ptr.next = head;

        return newHead ;

        
    }
}