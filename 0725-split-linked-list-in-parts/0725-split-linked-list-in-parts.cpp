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
    vector<ListNode*> splitListToParts(ListNode* head, int k) {
        vector<ListNode*> ans;

        int n = 0;
        ListNode* temp = head;

        while (temp != NULL) {
            n++;
            temp = temp->next;
        }

        int base = n / k;
        int extra = n % k;

        temp = head;

        for (int i = 0; i < k; i++) {

            int partSize = base;

            if (i < extra) {
                partSize++;
            }

            if (partSize == 0) {
                ans.push_back(NULL);
                continue;
            }

            ListNode* partHead = temp;

            for (int j = 1; j < partSize; j++) {
                temp = temp->next;
            }

            ListNode* nextPart = temp->next;

            temp->next = NULL;

            ans.push_back(partHead);

            temp = nextPart;
        }

        return ans;
    }
};