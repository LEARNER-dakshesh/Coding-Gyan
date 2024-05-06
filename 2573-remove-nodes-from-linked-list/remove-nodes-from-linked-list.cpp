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
    ListNode* removeNodes(ListNode* head) {
        ListNode* temp=head;
        vector<int>v;
        if(head==NULL || !head->next)
        {
             return head;
         }
    ListNode * newnode = removeNodes(head -> next);
    if(newnode->val > head->val) return newnode;
    
    head->next =newnode;
    
    return head;
    } 
};