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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* res = new ListNode(0);
        ListNode* curr = res; 
        int carr = 0;
        int sum = 0;
        while(l1!=NULL && l2 != NULL ){
            sum = l1->val + l2->val + carr;
            carr = sum/10;
            curr->next = new ListNode(sum%10);
            curr = curr->next; 
            l1 = l1->next ; 
            l2 = l2->next;
            
        }
        while(l1!=NULL || l2!=NULL){
            if(l1 == NULL){
                sum = l2->val + carr;
                carr = sum/10;
                curr->next = new ListNode(sum%10);
                l2 = l2->next;
            }
            else{
                sum = l1->val + carr;
                carr = sum/10;
                curr->next = new ListNode(sum%10);
                l1=l1->next;
            }
            curr = curr->next;
        }
        if(carr){
            curr->next = new ListNode(1); 
        }

        return res->next;
    }
};