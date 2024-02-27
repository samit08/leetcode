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
    ListNode* mergeKLists(vector<ListNode*>& v) {
        ListNode* temp;
        vector<int> ans;
        for(int i =0;i<v.size();i++)
        {
            temp=v[i];
            while(temp)
            { ans.push_back(temp->val);
               temp=temp->next;
            }

        }
         sort(ans.begin(),ans.end());
        ListNode* dummy = new ListNode(-1);
        ListNode* current = dummy;
        for(auto it:ans)
        {   current->next=new ListNode(it);
             current = current->next;
        }
        ListNode* mergedList = dummy->next;
        delete dummy;
        return mergedList;
            
        
    }
};