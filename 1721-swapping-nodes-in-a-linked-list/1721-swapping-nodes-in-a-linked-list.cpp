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
    ListNode* swapNodes(ListNode* head, int k) {
        vector<int> a;
        ListNode* temp=head;
        int c=0;
        while(temp!=NULL){
            a.push_back(temp->val);
            temp=temp->next;
            c++;
        }
        for(int i=0;i<c;i++){cout<< a[i] << "\t";}
        temp=head;
        int etemp=a[k-1];
        a[k-1]=a[a.size()-k];
        a[a.size()-k]=etemp;
        for(int i=0;i<c;i++){
            temp->val=a[i];
            temp=temp->next;
        }
        return head;
    }
};