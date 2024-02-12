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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode*t1=l1;
         ListNode*t2=l2;
         ListNode*curr= nullptr;
         int carry=0,sum=0;
         ListNode* dn=new ListNode(-1);
         curr=dn;
         while(t1!=nullptr||t2!=nullptr)
         {
             sum=carry;
             if(t1!=nullptr){
              sum=sum+t1->val;
              t1=t1->next;}
               
             if(t2!=nullptr){
             sum=sum+t2->val;
             t2=t2->next;
             }
               carry=sum/10;
             ListNode*neww=new ListNode(sum%10);
           
             curr->next=neww;
             curr=curr->next;

         }
         if(carry>0){
         ListNode*la=new ListNode(carry);
          curr->next=la;
    }
    return dn->next;}
};