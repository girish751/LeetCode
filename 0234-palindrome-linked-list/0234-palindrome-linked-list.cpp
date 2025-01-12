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
    bool check_palindrome(vector<int>&arr){
        int start=0;
        int end=arr.size()-1;
        while(start<=end){
            if(arr[start]==arr[end]){
                start++;
                end--;
            }
            else{
                return false;
            }
        }
        return true;
    }
public:
    bool isPalindrome(ListNode* head) {
        vector<int>arr;
        ListNode*temp=head;
        while(temp!=NULL){
            arr.push_back(temp->val);
            temp=temp->next;
        }
        return check_palindrome(arr);
        
    }
};