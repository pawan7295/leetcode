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
ListNode* revers(ListNode* head)
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
    ListNode* removeNodes(ListNode* head) {
       if(head==NULL)
       return NULL;
       head=revers(head);
       ListNode* maxnode=head;
       ListNode* curr=head;
       while(curr!=NULL && curr->next!=NULL)
       {
        if(curr->next->val<maxnode->val)
        {
            curr->next=curr->next->next;

        }
        else
        {
            curr=curr->next;
            maxnode=curr;
        }
       }
       return revers(head);
    }
};