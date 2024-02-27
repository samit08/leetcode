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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {

        vector<int> v;
        ListNode* temp1=list1;
        ListNode* temp2=list2;  
        while(temp1){
           v.push_back(temp1->val);
               temp1=temp1->next;
        } 
         while(temp2){
           v.push_back(temp2->val);
               temp2=temp2->next;
        } 
        sort(v.begin(),v.end());
        ListNode* dummy = new ListNode(-1);
        ListNode* current = dummy;
        for(auto it:v)
        {   current->next=new ListNode(it);
             current = current->next;
        }
        ListNode* mergedList = dummy->next;
        delete dummy;
        return mergedList;
            

        }
        
        //  
};