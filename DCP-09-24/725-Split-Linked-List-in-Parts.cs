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
    public ListNode[] SplitListToParts(ListNode head, int k) {
        int len = 0 ;
        ListNode cur = head ;
        while(cur != null )
        {
            len++ ;
            cur = cur.next;
        }


        int part = len / k ;
        int pluspart  = len % k ;

        ListNode[] parts = new ListNode[k] ;

        cur = head ;
        for(int i = 0 ; i < k ; i++)
        {
            ListNode pH =  cur ;
            int ex = part + ( i < pluspart ? 1 : 0 ) ;
            for (int j = 0; j < ex - 1; j++) {
                if (cur != null) {
                    cur = cur.next;
                }
            }

            if( cur != null )
        {
            ListNode nP = cur.next  ;
            cur.next = null ;
            cur = nP ;
        }

        parts[i] = pH ;

        }

        return parts ;
    }
    
}