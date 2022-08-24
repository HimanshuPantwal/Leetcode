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
    ListNode *p;
    bool check(ListNode *head)
    {
        if(head==NULL)
        {
            return true;
        }
        bool r= check(head->next) &(p->val==head->val);
        p=p->next;
        return r;
    }
    bool isPalindrome(ListNode* head) {
         p=head;
        return check(head);
    }
};