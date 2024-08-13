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
ListNode* rev(ListNode *l1)
{
    if(l1==NULL || l1->next==NULL)
    {
        return l1;
    }
    ListNode* curr=l1;
    ListNode *nxt=NULL,*prev=NULL;
    while(curr)
    {
        nxt=curr->next;
        curr->next=prev;
        prev=curr;
        curr=nxt;
    }

    return prev;
}
ListNode *solve(ListNode *l1m,ListNode *l2m)
{
    int carry=0;
    ListNode* itr=new ListNode();
    ListNode* ans=itr;
    while(l1m!=NULL || l2m!=NULL || carry>0)
    {
        int sum=carry;
        if(l1m!=NULL)
        {
            sum+=l1m->val;
            l1m=l1m->next;
        }
        if(l2m!=NULL)
        {
            sum+=l2m->val;
            l2m=l2m->next;
        }
        int val=sum%10;
        carry=sum/10;
        ans->next=new ListNode(val);
        ans=ans->next;
    }
    return itr->next;
}
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* l1m= rev(l1);
        ListNode* l2m= rev(l2);

        ListNode *res=solve(l1m,l2m);
        return rev(res);
    }
};