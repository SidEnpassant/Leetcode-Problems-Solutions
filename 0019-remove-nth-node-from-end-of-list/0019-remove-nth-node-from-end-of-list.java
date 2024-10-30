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
        ListNode temp = head;
        int count = 0;

        while(temp!=null){
            count++;
            temp = temp.next;
        }
        if(count == n){
            return head.next;
        }
        int res = count - n;
        temp = head;
        while(temp!=null){
            res--;
            if(res == 0) break;
            temp = temp.next;
            
        }
        ListNode delete = temp.next;
        temp.next = temp.next.next;

        return head;

    }
}