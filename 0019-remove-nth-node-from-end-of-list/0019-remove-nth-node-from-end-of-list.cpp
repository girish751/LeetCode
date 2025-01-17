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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int sizeOfList = 0;
        if(head==NULL || head->next==NULL) return NULL;
        ListNode* currentNode = head;
        while(currentNode != NULL){
            sizeOfList++;
            currentNode = currentNode->next;
        }
        int nodeToBeRemoved = sizeOfList - n + 1;
        int count = 0;
        ListNode* prevNode = NULL;
        currentNode = head;
        while(currentNode!=NULL){
            count++;
            if(count==nodeToBeRemoved && prevNode!=NULL){ 
                prevNode->next = currentNode->next;
                currentNode->next=NULL;
            } else if(count==nodeToBeRemoved && prevNode==NULL){ 
                ListNode* newHead = currentNode->next;
                currentNode->next=NULL;
                return newHead;
            }
            prevNode = currentNode;
            currentNode = currentNode->next;
        }
        return head;
    }
};