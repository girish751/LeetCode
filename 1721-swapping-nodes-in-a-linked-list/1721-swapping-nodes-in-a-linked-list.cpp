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
        ListNode* first = head;
        int len = 0;

       
        ListNode* temp = head;
        while (temp != NULL) {
            len++;
            temp = temp->next;
        }

       
        ListNode* front = head;
        for (int i = 1; i < k; i++) {
            front = front->next;
        }

 
        ListNode* back = head;
        for (int i = 1; i < len - k + 1; i++) {
            back = back->next;
        }

      
        int tempVal = front->val;
        front->val = back->val;
        back->val = tempVal;

        return head;
    }
};
