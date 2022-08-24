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
    ListNode* reverseList(ListNode* head) {
        ListNode* p=head;
        ListNode* q=head;
        int size=0;
        while(q!=NULL)
        {
            size++;
            q=q->next;
        }
        
        int s=size;
        while(s!=size/2)
        {
            int l=0;
            ListNode* r=head;
            while(l!=size/2)
            {
                  r=r->next;
                l++;
            }
            
            int m=s-l;
            
            while(m!=1)
            {
                r=r->next;
                m--;
            }
            int temp=p->val;
            p->val=r->val;
            r->val=temp;
            
          p=p->next;
          s--;
        }
        return head;
    }
};