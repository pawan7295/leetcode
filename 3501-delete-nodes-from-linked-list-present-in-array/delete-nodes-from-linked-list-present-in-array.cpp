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
    ListNode* modifiedList(vector<int>& nums, ListNode* head) {
        unordered_set<int> set(nums.begin(),nums.end());
        ListNode* dummy=new ListNode(0,head);
        ListNode* curr=dummy;
        while( curr->next!=NULL )
        {
            if(set.find(curr->next->val)!=set.end()) 
            {
                curr->next=curr->next->next;
            }
            else
            curr=curr->next;
        }
        return dummy->next;
    }
};