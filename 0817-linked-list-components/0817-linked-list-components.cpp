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
    int numComponents(ListNode* head, vector<int>& nums) {
        unordered_set<int>st;
        int count = 0;
        if(head == NULL) return 0 ;
        for(int i : nums){
            if(st.find(i) == st.end()){
                st.insert(i);
            }
        }
        while(head != NULL){
            if(st.find(head->val) == st.end()){
                head = head->next;
            }
            else{
                while(head != NULL && st.find(head->val) != st.end()){
                    head = head->next;
                }
                count++;
            }
        }
        return count ;
    }
};