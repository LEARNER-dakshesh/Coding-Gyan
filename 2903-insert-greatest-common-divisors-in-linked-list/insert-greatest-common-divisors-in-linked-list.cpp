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
int checkGcd(int a,int b)
{
    if (a == 0) 
        return b; 
    if (b == 0) 
        return a; 
  
    if (a == b) 
        return a; 
  
    if (a > b) 
        return checkGcd(a - b, b); 
    return checkGcd(a, b - a); 
}
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
            ListNode* temp=head;
            while(temp!=NULL && temp->next!=NULL)
            {
                int val=checkGcd(temp->val,temp->next->val);
                ListNode *nextnode=new ListNode(val);
                nextnode->next=temp->next; 
                temp->next=nextnode; 
                temp=temp->next->next;
            }
            return head;
    }
};