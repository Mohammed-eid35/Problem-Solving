/**
 * Definition for singly-linked list.
 * function ListNode(val, next) {
 *     this.val = (val===undefined ? 0 : val)
 *     this.next = (next===undefined ? null : next)
 * }
 */
/**
 * @param {ListNode} head
 * @return {ListNode}
 */
var deleteDuplicates = function(head) {
    let cur = head, pre = null;
    while (cur && cur.next) {
        if (cur.val == cur.next.val) {
            while (cur && cur.next && cur.val == cur.next.val) cur = cur.next;
            cur = cur.next;
            if (!pre) head = cur;
            else pre.next = cur;
        }
        else {
            pre = cur;
            cur = cur.next;    
        }
    }
    return head;
};
