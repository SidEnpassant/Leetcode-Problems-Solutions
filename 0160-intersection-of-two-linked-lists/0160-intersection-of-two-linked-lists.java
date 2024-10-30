/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode(int x) {
 *         val = x;
 *         next = null;
 *     }
 * }
 */









public class Solution {
    public ListNode getIntersectionNode(ListNode headA, ListNode headB) {
        int n1 = 0, n2 = 0;
        ListNode t1 = headA;
        ListNode t2 = headB;

        while (t1 != null) {
            n1 += 1;
            t1 = t1.next;
        }

        while (t2 != null) {
            n2 += 1;
            t2 = t2.next;
        }

        if (n1 < n2) {
            return collisionPoint(headB, headA, n2 - n1);
        } else {
            return collisionPoint(headA, headB, n1 - n2);
        }
    }

    public ListNode collisionPoint(ListNode c1, ListNode c2, int d) {
        while (d != 0) {
            d--;
            c1 = c1.next;
        }
        while (c1 != c2) {
            c1 = c1.next;
            c2 = c2.next;
        }
        return c1;
    }
}
