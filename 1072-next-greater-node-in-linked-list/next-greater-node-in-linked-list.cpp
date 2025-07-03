
class Solution {
public:
int prefix(vector<int>& ans,int idx,int a)
{
    for(int i=idx;i<ans.size();i++)
    {
        if(ans[i]>a)
        {
            return ans[i];
            break;
        }
    }
    return 0;
}
    vector<int> nextLargerNodes(ListNode* head) {
        vector<int> ans;
        ListNode* temp=head;
        while(temp!=NULL)
        {
            ans.push_back(temp->val);
            temp=temp->next;
        }
        vector<int> v;
        for(int i=0;i<ans.size();i++)
        {
        v.push_back(prefix(ans,i,ans[i]));
        }
        return v;
    }
};