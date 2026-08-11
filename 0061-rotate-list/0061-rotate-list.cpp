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
    ListNode* rotateRight(ListNode* head, int k) {
        int c=1;
        ListNode* temp = head ; 
        if(head == NULL) return head;
        if( head->next == NULL) return head;
        while(temp->next != NULL){
                temp=temp->next;
                c++;
            }
        ListNode* tail = temp;
        k = k - c*(k/c);
        for(int i=0;i<k;i++){
            temp=head;
            while(temp->next != tail){
                temp=temp->next;
            }
            tail->next = head ;
            head = tail;
            tail = temp;
            tail->next = NULL;
        }
        return head;
    }
};