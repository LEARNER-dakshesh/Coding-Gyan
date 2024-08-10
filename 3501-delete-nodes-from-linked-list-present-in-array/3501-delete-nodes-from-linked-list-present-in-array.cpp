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
        unordered_set<int> st(nums.begin(), nums.end());
        ListNode* ret= new ListNode;
        ListNode* current=ret;
        ListNode *temp=head;

        while(temp)
        {
            int check=temp->val;
            if(st.find(check) == st.end())
            {
                current->next=new ListNode(check);
                current=current->next;
            }
            temp=temp->next;
        }

        return ret->next;
    }
};