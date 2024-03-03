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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* temp=head;
        ListNode* help = head;
        
         int c=0;
         while(temp!=NULL)
         {
             temp=temp->next;
             c++;
         }
        int calc=c-n;
        if (calc==0){
            return head->next;
        }
        
        calc-=1;
         while(calc!=0)
         {
            calc--;
            help=help->next;
         }
         help->next=help->next->next;
        return head;
    }
};