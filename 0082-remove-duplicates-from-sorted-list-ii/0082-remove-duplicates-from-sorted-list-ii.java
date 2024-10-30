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
//class Solution {
   // public ListNode deleteDuplicates(ListNode head) {
     //    if(head == null){
     //       return head;
     //   }
     //   ListNode prev = head;
      //  ListNode curr = head.next;

     //  while(curr!=null){
     //     if(prev.val == curr.val){
       //         prev = curr.next;
       //         curr = curr.next.next;
               
       //     }
      //      else{
       //         prev = curr;
       //         curr = curr.next;
       //     }
      //  }
       // return head;
  //  }
//}



class Solution {
    public ListNode deleteDuplicates(ListNode head) {
        ListNode dummy = new ListNode(0);
        dummy.next = head;

        ListNode prev = dummy;  
        ListNode curr = head;   

        while (curr != null) {
           
            boolean isDuplicate = false;
            while (curr.next != null && curr.val == curr.next.val) {
                curr = curr.next; 
                isDuplicate = true;
            }

            if (isDuplicate) {
                prev.next = curr.next;
            } else {
                prev = prev.next;
            }

            curr = curr.next;
        }

        return dummy.next; 
    }
}