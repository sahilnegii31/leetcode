/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    void deleteNode(ListNode* node) {
        ListNode* prev = nullptr;
        while(node->next != NULL){
            ListNode* temp = node->next;
            node->val = temp->val;
            prev = node;
            node = node->next;
        }
        prev->next = NULL ;
        delete node ;
    }
};