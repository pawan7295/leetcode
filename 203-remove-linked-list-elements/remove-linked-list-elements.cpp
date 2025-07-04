
class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        
        ListNode* temp=head;
        ListNode* dummy=new ListNode(0);
        ListNode* fast=dummy;
        ListNode* first=head;
       while(first!=NULL)
        {
            if(first->val!=val)
            {
                fast->next=new ListNode(first->val);
                fast=fast->next;
            }
            first=first->next;
        }
        return dummy->next;
    } 
};