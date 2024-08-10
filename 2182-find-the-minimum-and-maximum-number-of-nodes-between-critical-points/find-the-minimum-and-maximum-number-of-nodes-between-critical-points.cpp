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
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        vector<int>prev;
        prev.push_back(head->val);
        ListNode* temp=head->next;
        vector<int>pos;
        int curr=1;
        while(temp->next!=NULL)
        {
            cout<<curr<<" ";
            curr++;
            if(temp->val > temp->next->val && temp->val>prev[prev.size()-1])
            {
                cout<<"hi"<<endl;
                pos.push_back(curr);
            }
            else if(temp->val<prev[prev.size()-1] && temp->val < temp->next->val)
            {
                pos.push_back(curr);

            }
            prev.push_back(temp->val);
            temp=temp->next;
        }
        cout<<endl;

        sort(pos.begin(),pos.end());
        cout<<pos.size();
        int mini=INT_MAX;
        for(int x=1;x<pos.size();x++)
        {
            mini=min(mini,pos[x]-pos[x-1]);
        }
        if(pos.size()>1)
        {
            return {mini,pos[pos.size()-1]-pos[0]};
        }
        return {-1,-1};
    }
};