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
    ListNode* rotateRight(ListNode* head, int k) 
    {
        if(head==NULL || head->next==NULL)
        {
            return head;
        }
        int count = 0;

        ListNode* temp = head;
        while(temp)
        {
            temp=temp->next;
            count++;
        }


        k = k % count;


        

        while(k--)
        {
            ListNode* p = head;
            ListNode* q = head;
            while(q->next!=NULL)
            {
                p=q;
                q=q->next;


            }
            p->next=NULL;
            q->next=head;
            head=q;





        }

        return head;
    }
};