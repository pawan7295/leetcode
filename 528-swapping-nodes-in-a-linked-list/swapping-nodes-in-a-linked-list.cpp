
class Solution {
public:
ListNode* rev(ListNode* head)
{
    ListNode* curr=head;
    ListNode* nexx=head;
    ListNode* prev=NULL;
    while(curr!=NULL)
    {
        nexx=curr->next;
        curr->next=prev;
        prev=curr;
        curr=nexx;
    }
    return prev;
}
    ListNode* swapNodes(ListNode* head, int k) {

        ListNode* dummy=new ListNode(0);
        ListNode* temp=dummy;
        ListNode* curr=head;
        int len=0;
        while(curr!=NULL)
        {
            temp->next=new ListNode(curr->val);
            temp=temp->next;
            curr=curr->next;
            len++;
        }
        ListNode* first=head;
        for(int i=1;i<k;i++)
        {
            first=first->next;
        }
        ListNode* second=head;
        for(int i=1;i<len-k+1;i++)
        {
            second=second->next;
        }
       
        swap(first->val,second->val);
        return head;
    }
};