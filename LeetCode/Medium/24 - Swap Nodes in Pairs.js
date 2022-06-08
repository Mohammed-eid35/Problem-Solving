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
var swapPairs = function(head) {
    let cur = head;
    while (cur && cur.next) {
        [cur.val, cur.next.val] = [cur.next.val, cur.val];
        cur = cur.next.next;
    }
    return head;
};
