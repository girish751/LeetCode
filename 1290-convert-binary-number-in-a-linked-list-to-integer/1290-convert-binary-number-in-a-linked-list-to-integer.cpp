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
    int lenght(ListNode*head){
        int cnt=0;
        while(head!=NULL){
            cnt++;
            head=head->next;
        }
        return cnt;
    }
    int power(int x,int y){
        int p=1;
        for(int i=0;i<y;i++){
            p=p*x;

        }return p;
    }
public:
    int getDecimalValue(ListNode* head) {
        ListNode*temp=head;
        if(temp==NULL){
            return 0;
        }
        if(temp!=NULL && temp->next==NULL){
            return temp->val;
        }
        int len=lenght(head);
        int sum=0;
        while(temp!=NULL){
            sum=sum+(temp->val)*power(2,len-1);
            len--;
            temp=temp->next;

        }
        return sum;
        
    }
};