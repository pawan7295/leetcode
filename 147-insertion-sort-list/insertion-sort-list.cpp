
class Solution {
public:
    ListNode* insertionSortList(ListNode* head) {
        vector<int> v;
     
        ListNode* temp=head;
        while(temp!=NULL)
        {
            v.push_back(temp->val);
            temp=temp->next;
        }
        int n=v.size();
        sort(v.begin(),v.end());
        ListNode* dummy=new ListNode(0);
        ListNode* curr=dummy;
        for(int val : v)
        {
            curr->next=new ListNode(val);
            curr=curr->next;
        }
        return dummy->next;
    }
};