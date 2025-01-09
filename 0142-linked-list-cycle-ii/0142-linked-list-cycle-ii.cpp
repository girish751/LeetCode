/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        ListNode*temp=head;
        if(head==NULL){
            return NULL;
        }
        if(head->next==NULL){
            return NULL;
        }
        map<ListNode*,bool>visted;
        while(temp!=NULL){
            if(visted[temp]==true){
                
                return temp;
            }
            visted[temp]=true;
            temp=temp->next;
        }
        return head;
       
    }
};