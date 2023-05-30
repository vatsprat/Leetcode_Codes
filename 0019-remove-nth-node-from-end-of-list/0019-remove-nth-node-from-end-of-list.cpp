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
    int getlength(ListNode* head)
    {
        ListNode* p = head;
        int count=0;

        while(p)
        {

            p=p->next;
            count++;


        }

        return count;
    }
    ListNode* removeNthFromEnd(ListNode* head, int n) 
    {
        int len = getlength(head);
        int l = len-n-1;
        ListNode* p = head;
        
        while(l>0)
        {
            p=p->next;
            l--;
        }

        if(p==head && len == 1)
        {
            return NULL;
        }

        if(n==len)
        {
            ListNode* z = head;
            z=z->next;
            head=z;

            return head;
        }
         
        ListNode* q = p->next;

        p->next = q->next;

        return head;



    }
};