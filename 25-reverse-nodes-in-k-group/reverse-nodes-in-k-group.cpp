class Solution {
public:
    ListNode* reverseKGroup(ListNode* head, int k) {
        if (head == NULL) return NULL; // Base case: empty list
        
        ListNode* prev = NULL;
        ListNode* curr = head;
        int cnt = 0;

        // Reverse the first k nodes
        while (curr != NULL && cnt < k) {
            ListNode* forward = curr->next;
            curr->next = prev;
            prev = curr;
            curr = forward;
            cnt++;
        }
        
        // If the remaining list has less than k nodes, no need to reverse further
        if (cnt < k) {
            // Reverse the partially reversed group back to original order
            return reverseKGroup(prev, cnt);
        }

        // Recursively reverse the next k nodes and connect the head of the reversed group
        head->next = reverseKGroup(curr, k);

        // Return the head of the reversed group
        return prev;
    }
};
