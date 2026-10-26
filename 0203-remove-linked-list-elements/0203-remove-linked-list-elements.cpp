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
    ListNode* removeElements(ListNode* head, int val) {
        ListNode* dummy = new ListNode(0 , head);
        ListNode* temp = dummy;
        while(temp != NULL){
            if(temp->next != NULL && temp->next->val == val){
                ListNode* rd = temp->next;
                if(rd != NULL && rd->val == val){
                    while(rd != NULL && rd->val == val){
                        rd = rd->next;
                    }
                    temp->next = rd;
                }
            }
            temp = temp->next;
        }
        return dummy->next;
    }
};