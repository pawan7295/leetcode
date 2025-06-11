
class Solution {
public:
ListNode* rev(ListNode* head)
{
    ListNode* prev=NULL;
    ListNode* curr=head;
    ListNode* nexx=head;
    while(curr!=NULL)
    {
        nexx=curr->next;
        curr->next=prev;
        prev=curr;
        curr=nexx;
    }
    return prev;
}
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
       l1= rev(l1);
       l2= rev(l2);
       int carry=0;
       ListNode* result=NULL;
       while(l1 || l2 || carry)
       {
         int sum=carry;
        if(l1)
        {
            sum=sum+l1->val;
            l1=l1->next;
        }
        if(l2)
        {
            sum=sum+l2->val;
            l2=l2->next;
        }
        carry=sum/10;
        
            ListNode* newnode=new ListNode(sum%10);
            newnode->next=result;
            result=newnode;
       }
       return result;
    }
};