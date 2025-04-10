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
    ListNode* insertionSortList(ListNode* head) {
        ListNode*sort=NULL;
        while(head!=NULL){
            ListNode*curr=head;
            head=head->next;
            curr->next=NULL;
              

            if(sort==NULL || sort->val>curr->val){
                curr->next=sort;
                sort=curr;
            }
            else{
                ListNode*temp=sort;
                while(temp->next!=NULL&&temp->next->val<curr->val){
                    temp=temp->next;
                }
                curr->next=temp->next;
                temp->next=curr;
            }
        }
        return sort;

    }
};
