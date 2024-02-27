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
    ListNode* rotateRight(ListNode* head, int k) {
        if (head == nullptr || head-> next== nullptr||k==0) return head;

        ListNode *temp=head;
        int len=0;
        while(temp){
            len++;
            temp=temp->next;       
        }
        int s=k%len;
        if(s==0) return head;
        temp=head;
        while(temp->next!=NULL){
            temp=temp->next;
        }
       temp->next=head;
        
         

        ListNode*tail=head;
        int cnt=0;
        while(tail){
            cnt++;
            if(cnt==len-s) break;
            tail=tail->next;
        }
        head=tail->next;
        tail->next=NULL;
        return head;


        
    }
};