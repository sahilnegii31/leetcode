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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        int i = 0 ;
        ListNode* prevleft = NULL ;
        ListNode* l = head;
        if(head->next == NULL) return head;
        if(left == right ) return head;
        while(i < left-1){
            prevleft = l ;
            l = l->next;
            i++;
        }
        ListNode* r = head;
        i=1;
        while(i<=right && r!=NULL){
            r = r->next;
            i++;
        }
        ListNode* prev = NULL;
        ListNode* temp = l;
        ListNode* curr = NULL;
        while(temp != r ){
            curr = temp;
            temp = temp->next;
            curr->next = prev;
            prev = curr;
        }
        if(prevleft != NULL){
            prevleft->next = curr;
        }
        else{
            head = curr;
        }
        l->next = r;
        return head;
    }
};