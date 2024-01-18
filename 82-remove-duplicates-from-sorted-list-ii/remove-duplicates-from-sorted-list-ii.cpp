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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* temp=head;
        map<int,int>mp;  
        while(temp!=NULL)
        {
            int value=temp->val;
            mp[value]++;
            temp=temp->next;
        }
        ListNode *newHead=NULL;
        ListNode* current=NULL;
        for (auto x : mp) {
        ListNode* newNode = new ListNode(x.first);
        if(x.second==1)
        {
        if (newHead == NULL) {
            newHead = newNode;
            current = newNode;
        } else {
            current->next = newNode;
            current = newNode;
        }
        }
    }

    return newHead;
        
    }
};