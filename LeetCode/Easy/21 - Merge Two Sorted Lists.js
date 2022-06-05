/**
 * Definition for singly-linked list.
 * function ListNode(val, next) {
 *     this.val = (val===undefined ? 0 : val)
 *     this.next = (next===undefined ? null : next)
 * }
 */
/**
 * @param {ListNode} list1
 * @param {ListNode} list2
 * @return {ListNode}
 */
var mergeTwoLists = function(list1, list2) {
    let ret = new ListNode(), res = ret;
    while (list1 && list2) {
        if (list1.val < list2.val) {
            res.next = list1;
            list1 = list1.next;
        }
        else {
            res.next = list2;
            list2 = list2.next;
        }
        res = res.next
    }
    res.next = list1 || list2;
    return ret.next;
};
