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
    ListNode* swapNodes(ListNode* head, int k) 
    {
        ListNode* p = head;
        ListNode* q = head;
        int count=0;
        while(p)
        {
            p=p->next;
            count++;

        }
        p=head;
        k=k-1;
        int t = k;
        while(t--)
        {
            p=p->next;
            

        }
        int a = p->val;
        int m = count-k-1;
        while(m--)
        {
            q=q->next;

        }
        int b = q->val;



        q->val = a;
        p->val = b;

        return head;
    }
};