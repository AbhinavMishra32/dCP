
class ListNode {
    int val;
    ListNode next;
    ListNode() {}
    ListNode(int val) { this.val = val; }
    ListNode(int val, ListNode next) { this.val = val; this.next = next; }

    class Solution {
        public ListNode removeElements(ListNode head, int val) {
            ListNode prev = head;
            ListNode curr = head.next;
            while(curr.next !=null){
                prev = curr;
                curr = curr.next;
                if(head.val == curr.val){
                    prev = curr.next;
                }
            }
            return head;
        }
    }
}