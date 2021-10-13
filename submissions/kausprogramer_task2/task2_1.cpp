class Solution {
public:
    ListNode* reverseList(ListNode* head) {
          if ( (head == NULL) || (head->next == NULL) ) return head;
        
        ListNode* curr = head->next;
        head->next = NULL;
        
        while (curr != NULL) {
            ListNode *temp = curr->next;
            
            // Reverse
            curr->next = head;
            
            // Update
            head = curr;
            curr= temp;
        }
        
        return head;
    }
};