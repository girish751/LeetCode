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
        int cnt=0;
        ListNode*temp=head;
        while(temp!=NULL){
            cnt++;
            temp=temp->next;
        }
        return (cnt/2);
    }
public:
    ListNode* deleteMiddle(ListNode* head) {
        int ans=length(head);
        if(ans==0){
            return NULL;
        }
        ListNode*temp=head;
        ListNode*ptr=temp;
        int len=0;
        while(len<ans){
            ptr=temp;
            temp=temp->next;
            len++;
        }
        ptr->next=temp->next;
        temp->next=NULL;  
        return head; 
    }
};