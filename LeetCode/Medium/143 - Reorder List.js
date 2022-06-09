/**
 * Definition for singly-linked list.
 * function ListNode(val, next) {
 *     this.val = (val===undefined ? 0 : val)
 *     this.next = (next===undefined ? null : next)
 * }
 */
/**
 * @param {ListNode} head
 * @return {void} Do not return anything, modify head in-place instead.
 */
var reorderList = function(head) {
    if (!head) return;
    let cur = head, middle = findMiddle(head);
    let rev = reverseList(middle.next);
    while (rev) [cur.next, rev, cur.next.next, cur] = [rev, rev.next, cur.next, cur.next]

    middle.next = null;
};


var findMiddle = function(head) {
    if (!head) return;
    
    let middle = head;
    while (head && head.next) {
        head = head.next.next;
        middle = middle.next;
    }
    
    return middle;
}

var reverseList = function(head) {
    if (!head) return;
    
    let pre = null;
    while (head) [head.next, pre, head] = [pre, head, head.next]
    
    return pre;
}
