/**
 * Definition for singly-linked list.
 * function ListNode(val, next) {
 *     this.val = (val===undefined ? 0 : val)
 *     this.next = (next===undefined ? null : next)
 * }
 */
/**
 * @param {ListNode} head
 * @param {number} k
 * @return {ListNode}
 */
var reverseKGroup = function(head, k) {
    if (!head) return null;
    let tail = head;
    for (let i = 1; i < k; ++i) {
        tail = tail.next;
        if (!tail) return head;
    }
    let next = tail.next;
    tail.next = null;
    
    const reverse = (cur) => {
        var pre = null;
        while (cur) [cur.next, pre, cur] = [pre, cur, cur.next];
        return pre;
    }
    
    reverse(head);
    head.next = reverseKGroup(next, k);
    return tail;
};
