
class Solution {
public:
    ListNode* deleteMiddle(ListNode* head) {
        if(head==NULL || head->next==NULL) return NULL;
        ListNode* slow=head;
        ListNode* temp=head;
        int len=0;
        while(temp!=NULL)
        {
            temp=temp->next;
            len++;
        }
        for(int i=1;i<len/2;i++)
        {
            slow=slow->next;
        }
        slow->next=slow->next->next;
        return head;
    }
};