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
    int length(ListNode*head){
        int len=0;
        ListNode*temp=head;
        while(temp!=NULL){
            len++;
            temp=temp->next;
        }
        return (len/2);
    }
public:
    ListNode* middleNode(ListNode* head) {
        int ans=length(head);
        ListNode*temp=head;
        int cnt=0;
        while(cnt<ans){
            temp=temp->next;
            cnt++;    
        }
        return temp;   
    }
};