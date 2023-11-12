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
    public class ListNode{
        int val;
        ListNode next;
        ListNode() {}
        ListNode(int val){
            this.val = val;
        }
        ListNode(int val, ListNode next){
            this.val = val;
            this.next = next;
        }
    }
    public ListNode removeNthFromEnd(ListNode head, int n) {
        if(head.next == null){
            return null;
        }
        int size = 0;
        ListNode currNode = head;
        ListNode prevNode = currNode;
        while(currNode.next != null){
            size++;
            prevNode = currNode;
            currNode = currNode.next;
            int nthFromLast = size-n+1;
            if(size == nthFromLast){
                prevNode.next = currNode.next;
            }
        }
        return head;
        
    }
    public static void main(String[] args){
        Solution.ListNode myobj = new Solution.ListNode();
    }
}