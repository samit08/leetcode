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
        if(head==NULL) return head;
  int cnt=0;
  ListNode* temp=head;
 while(temp!=NULL){
     cnt++;
     temp=temp->next;
 }
  if (n == cnt) {
            ListNode* newHead = head->next;
            delete head;
            return newHead;
  }
 int k=cnt-n;
 temp =head;
 if (k == 0) {
            ListNode* newHead = head->next;
            delete head;
            return newHead;
 }
 while(k>1){
  temp=temp->next;
   k--;   
 }
  ListNode* dd=temp->next;
  temp->next= temp->next->next;
  delete dd;
  return head;


        
    }
};