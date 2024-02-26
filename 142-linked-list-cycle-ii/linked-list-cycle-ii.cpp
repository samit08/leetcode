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
        if(head==NULL||head->next ==NULL) return NULL;
        ListNode *temp=head;
        map<ListNode*,int> m;
        while(temp){
            if(m.find(temp)!=m.end()) return temp;
            m[temp]=1;
            temp=temp->next;
        }
        

        return NULL;
    }
};