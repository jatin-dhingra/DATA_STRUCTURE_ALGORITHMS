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
    public ListNode deleteMiddle(ListNode head) 
    {
        if(head.next==null)
        {
            return null;
        }
        ListNode p=head.next.next;
        ListNode q=head;
        
        while(p!=null && p.next!=null)
        {
            q=q.next;
            p=p.next.next;
        }
        q.next=q.next.next;
        return head;
        
    }
}