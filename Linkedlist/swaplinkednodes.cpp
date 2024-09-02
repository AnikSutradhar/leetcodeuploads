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
    ListNode* swapNodes(ListNode* head, int k) {
        if(head==NULL)
         return NULL;

         int cnt=1,position=1;
        ListNode* temp=head;
         ListNode* temp1=head;
        while(temp!=NULL)
         {
            cnt++;
            temp=temp->next;
         }
           temp=head;
         while(position!=k)
         {
            temp=temp->next;
            position++;
         }
         position=1;
         int posi=cnt-k;
         while(position!=posi)
         {
            temp1=temp1->next;
            position++;
         }

         int swap ;
          swap=temp->val;
          temp->val=temp1->val;
          temp1->val=swap;

        return head;
        
    }
};