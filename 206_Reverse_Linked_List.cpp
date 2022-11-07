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
    ListNode* reverseList(ListNode* head) 
    {
        ListNode *p,*q,*r;
        r=head;
        p=NULL;
        q=NULL;
        while(r)
        {
            p=r;
            r=r->next;
            p->next=q;
            q=p;
            
        }
        head=p;
        return head;
    }
};