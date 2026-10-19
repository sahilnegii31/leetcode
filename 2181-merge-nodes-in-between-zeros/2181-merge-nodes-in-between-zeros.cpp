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
        ListNode* ansHead = NULL;
        ListNode* temp = ansHead;
        while(head != NULL){
            if(head->val == 0){
                int sum = 0;
                head = head->next;
                while(head != NULL && head->val != 0){
                    sum += head->val;
                    head = head->next;
                }
                if(sum == 0) break;
                ListNode* node = new ListNode(sum);
                if(ansHead == NULL){
                    ansHead = temp = node;
                }
                else{
                    temp->next = node;
                    temp = node;
                }
            }
        }
        return ansHead;
    }
};