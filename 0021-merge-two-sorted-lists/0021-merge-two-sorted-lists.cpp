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
// class Solution {
//     ListNode* solve(ListNode*list1,ListNode*list2){
//         if(list1->next==NULL){
//             list1->next=list2;
//             return list1;
//         }
//         ListNode*prev=list1;
//         ListNode*temp=list2;
//         ListNode*curr=prev->next;
//         ListNode*next2=temp->next;
//         if(next2==NULL){
//           while(curr!=NULL){
//             if((prev->val<=temp->val) && curr->val>=temp->val){
//                 prev->next=temp;
//                 temp->next=curr;
//             }
//             else{
//                 prev=curr;
//                 curr=curr->next;
//             }
//           }
//           if(curr==NULL){
//             prev->next=temp;
//             return list1;
//           }
//         }
//         while(curr!=NULL && next2!=NULL){
//             if((prev->val <=temp->val) && temp->val<=curr->val){
//                 prev->next=temp;
//                 next2=temp->next;
//                 temp->next=curr;
//                 prev=temp;
//                 temp=next2;
//             }
//             else{
//                 prev=curr;
//                 curr=curr->next;
//                 if(curr==NULL){
//                     prev->next=temp;
//                     return list1;
//                 }
//             }
           
//         }
//          return list1;
//     }
// public:
//     ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
//         if(list1==NULL){
//             return list2;
//         }
//         if(list2==NULL){
//          return list1;
//         }
//         if(list1->val<=list2->val){
//            return solve(list1,list2);
//         }
//         else{
//              return solve(list2,list1);
//         }


class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* dummy = new ListNode(0);
        ListNode* op = dummy;

        while (list1 && list2) {
            if (list1->val <= list2->val) {
                op->next = list1;
                list1 = list1->next;
            } else {
                op->next = list2;
                list2 = list2->next;
            }
            op = op->next;
        }
        op->next = list1 ? list1 : list2;
        return dummy->next;
    }
};
