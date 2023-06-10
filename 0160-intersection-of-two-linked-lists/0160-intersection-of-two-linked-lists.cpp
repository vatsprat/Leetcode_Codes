/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) 
    {
        ListNode* p = headA;
        ListNode* q = headB;
        while(p!=NULL && q!=NULL)
        {
               while(p!=NULL)
               {
                   if(p==q)
                   {
                       return p;
                   }
                   p=p->next;
               }
               p=headA;
               q=q->next;
        }

        return NULL;
    }
};