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
    ListNode* modifiedList(vector<int>& nums, ListNode* head) {
        unordered_map<int , int>mp;
        for(int val : nums){
            mp.insert({val , 0});
        }
        ListNode* dummy = new ListNode(0 , head);
        ListNode* temp = head;
        while(temp->next != NULL){
            if(mp.find(dummy->next->val) != mp.end()){
                dummy->next = dummy->next->next;
            }
            if(mp.find(temp->next->val) != mp.end()){
                temp->next = temp->next->next;
            }
            else{
                temp = temp->next;
            }
        }
        return dummy->next;
    }
};