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
    ListNode* mergeNodes(ListNode* head) {
        ListNode* temp = head;
        ListNode* dummy = head;
        while(temp != NULL){
            if(temp->val == 0){
                int sum = 0;
                temp = temp->next;
                while(temp != NULL && temp->val != 0){
                    sum += temp->val;
                    temp = temp->next;
                }
                if(sum == 0) break;
                dummy = dummy->next;
                dummy->val = sum;
            }
        }
        dummy->next = NULL;
        head = head->next;
        return head;
    }
};