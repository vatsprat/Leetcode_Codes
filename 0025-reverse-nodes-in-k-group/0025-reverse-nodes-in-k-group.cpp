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
        int count=0;
        ListNode* p = head;
        while(p)
        {
           p=p->next;
           count++;
        }

        return count;
       
    }
    ListNode* reverseKGroup(ListNode* head, int k) 
    { 
        if(head==NULL)
        {
            return NULL;
        }

        if(k>getlength(head))
        {
            return head;
        }


        int count=0;
        ListNode* prev = NULL;
        ListNode* curr = head;
        ListNode* forward = head->next;

        while(count<k)
        {    
             
             forward = curr->next;
             curr->next=prev;
             prev = curr;
             curr = forward;
             count++;


        }

        if(forward)
        {

           
           head->next = reverseKGroup(forward,k);


        }


        return prev;

    }
};