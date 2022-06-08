class Node {
    constructor(val, next, prev) {
        this.val = val;
        this.next = next;
        this.prev = prev;
    }
}

var MyLinkedList = function() {
    this.length = 0;
};

/** 
 * @param {number} index
 * @return {number}
 */
MyLinkedList.prototype.get = function(index) {
    if (index < 0 || index > this.length) return -1;

    const node = this.getAt(index);
    if (!node) return -1;

    return node.val;
};

/** 
 * @param {number} val
 * @return {void}
 */
MyLinkedList.prototype.addAtHead = function(val) {
    const head = this.head;
    const tail = this.tail;

    this.head = new Node(val, head, null);
    this.length++;

    if (head) head.prev = this.head;
    else this.tail = this.head;
};

/** 
 * @param {number} val
 * @return {void}
 */
MyLinkedList.prototype.addAtTail = function(val) {
    const head = this.head;
    const tail = this.tail;

    this.tail = new Node(val, null, tail);
    this.length++;

    if (tail) tail.next = this.tail;
    else this.head = this.tail;
};

/** 
 * @param {number} index 
 * @param {number} val
 * @return {void}
 */
MyLinkedList.prototype.addAtIndex = function(index, val) {
    if (index < 0 || index > this.length) return;

    if (index === 0) {
        this.addAtHead(val);
        return;
    }
    if (index === this.length) {
        this.addAtTail(val);
        return;
    }

    const node = this.getAt(index);
    const newNode = new Node(val, node, node.prev);
    this.length++;

    if (node.prev) node.prev.next = newNode;

    node.prev = newNode;
};

/** 
 * @param {number} index
 * @return {void}
 */
MyLinkedList.prototype.deleteAtIndex = function(index) {
    if (index < 0 || index > this.length - 1) return;

    const node = this.getAt(index);
    this.length--;

    if (node.prev) node.prev.next = node.next;
    if (node.next) node.next.prev = node.prev;

    if (!node.prev) this.head = node.next;
    if (!node.next) this.tail = node.prev;

    if (!node.prev && !node.next) this.head = this.tail;
};

MyLinkedList.prototype.getAt = function(index) {
	if (index === this.length -1) return this.tail;
	
    let node = this.head;

    for (let i = 0; i < index && node; ++i) node = node.next;

    return node || null;
};

/** 
 * Your MyLinkedList object will be instantiated and called as such:
 * var obj = new MyLinkedList()
 * var param_1 = obj.get(index)
 * obj.addAtHead(val)
 * obj.addAtTail(val)
 * obj.addAtIndex(index,val)
 * obj.deleteAtIndex(index)
 */
