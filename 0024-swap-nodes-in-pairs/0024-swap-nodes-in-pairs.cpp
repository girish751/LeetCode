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
    void swap(int &a,int &b){
        int temp=a;
        a=b;
        b=temp;

    }
    ListNode* swa(ListNode*head){
        ListNode*curr=head;
        while(curr!=NULL){
            if(curr->next!=NULL){
               swap(curr->val,curr->next->val);
             }
             else{
                return head;
             }
            curr=curr->next->next;
        }
        return head;

    }
public:
    ListNode* swapPairs(ListNode* head) {
        // vector<int>arr;
        
        // while(curr!=NULL){
        //     arr.push_back(curr->val);
        //     curr=curr->next;
        // }
        return(swa(head));


    
        
    }
};