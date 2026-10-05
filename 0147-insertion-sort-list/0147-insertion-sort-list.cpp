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
    ListNode* insert(ListNode* dummy, ListNode* node) {
        ListNode* prev = dummy;
        ListNode* curr = dummy->next;

        while (curr != NULL && curr->val < node->val) {
            prev = curr;
            curr = curr->next;
        }

        prev->next = node;
        node->next = curr;

        return dummy;
    }

    ListNode* insertionSortList(ListNode* head) {
        ListNode* dummy = new ListNode(-1);

        ListNode* curr = head;

        while (curr != NULL) {
            ListNode* next = curr->next;
            dummy = insert(dummy, curr);
            curr = next;
        }

        return dummy->next;
    }
};