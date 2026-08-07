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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode*  fast = head;
        ListNode* prev = head;
        if( head == NULL || (head->next == NULL && n==1) ) return NULL;
        int c = 0 ;
        while(fast){
            c++;
            fast = fast->next;
        }
        if(n==c){
            ListNode* temp = head;
            head = head->next;
            delete temp;
            return head;
        }
        int idx = c-n-1;
        while(idx){
            idx--;
            prev = prev->next;
        }
        prev->next = prev->next->next;
    return head;
    }
};