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
    vector<ListNode*> splitListToParts(ListNode* head, int k) {

     int count=0;
     ListNode *temp=head;
     while(temp!=NULL)
     {
        temp=temp->next;
        count+=1;
     }
     temp=head;
     int nsize=count/k;
     int extra=count%k;
     cout<<nsize<<" "<<extra<<endl;
     vector<ListNode*>ans;

     for(int x=0;x<extra && temp!=NULL;x++)
     { 
            int value=nsize+1;
            ListNode *res=new ListNode();
            ListNode *dummy=res;
            while(value>0)
            {
                dummy->next=temp;
                dummy=dummy->next;
                temp=temp->next;
                value--;
            }
            if(dummy)
            {
                dummy->next=nullptr;
            }
            ans.push_back(res->next);

            k--;
      }
     while(k>0 && temp!=NULL) 
     {
        ListNode *res=new ListNode();
        ListNode *dummy=res;
        int rest=nsize;
        while(rest>0)
        {
           dummy->next=temp;
           dummy=dummy->next;
           temp=temp->next;
           rest--;
        }
        k--;
        if(dummy)
        {
            dummy->next=nullptr;
        }
        ans.push_back(res->next);
     }

     while (k > 0) 
     {
            ans.push_back(nullptr);
            k--;
     }

     return ans;
    }
};