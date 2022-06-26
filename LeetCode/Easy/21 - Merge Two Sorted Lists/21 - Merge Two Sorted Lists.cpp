/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode *head = new ListNode(), *curNode = head;
        while (list1 && list2) {
            if (list1->val < list2->val) {
                curNode->next = new ListNode(list1->val);
                list1 = list1->next;
            }
            else {
                curNode->next = new ListNode(list2->val);
                list2 = list2->next;
            }
            curNode = curNode->next;
        }
        
        while (list1) {
            curNode->next = new ListNode(list1->val);
            list1 = list1->next;
            curNode = curNode->next;
        }
        while (list2) {
            curNode->next = new ListNode(list2->val);
            list2 = list2->next;
            curNode = curNode->next;
        }

        return head->next;
    }
};